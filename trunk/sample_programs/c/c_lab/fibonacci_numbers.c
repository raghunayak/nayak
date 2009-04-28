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

/* C program to generate and print first n fibonacci numbers. */

#include <stdio.h>

int main()
{
    int max_count;
    int f1 = 0, f2 = 1, f3;
    int i;

    printf("\nEnter the number: ");
    scanf("%d", &max_count);

    printf("\nFirst %d fibonacci numbers are..\n", max_count);

    if (max_count >= 1)
        printf("%d  ", f1);

    if (max_count >= 2)
        printf("  %d  ", f2);

    for (i = 3; i <= max_count; ++i) {
        f3 = f1 + f2;
        printf("  %d  ", f3);

        f1 = f2;
        f2 = f3;
    }
    printf("\n");
    return 0;
}
