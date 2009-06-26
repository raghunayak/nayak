/*
 * Copyright (C) 2009 Raghavendra Nayak
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This program leaks sizeof(int) bytes of memory every second in a infinite loop.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototype
void leak_memory(unsigned int bytes);

int main()
{
   time_t before, after;

   printf("\nThis program will leak memory for Testing.");
   printf("\nStarting the program loop..\n");

   // get the time
   after = time(&before);

   // infinite loop
   for (;; time(&after)) {
      // check for 1 second time difference
      if (difftime(after, before) < 1)
         continue;
      // leak size(int) bytes of memory
      leak_memory(sizeof(int));
      before = after;
   }

   return EXIT_SUCCESS;
}

void leak_memory(unsigned int bytes)
{
   char *leak_ptr = (char *)malloc(bytes);
   unsigned int i;

   for (i = 0; i < bytes; ++i) {
        leak_ptr[i] = 1;
   }
   printf("Leaking %d bytes of memory\n", bytes);
}
