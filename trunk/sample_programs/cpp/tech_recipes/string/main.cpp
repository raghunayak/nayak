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

// sample to the std::string empty behavior

#include <string>
#include <iostream>

int main(void)
{
   std::string nullString;
   std::string emptyString("");

   if (nullString.empty())
   {
      std::cout<<"\nThe nullString string is empty.\n";
   }
   else
   {
      std::cout<<"\nThe nullString string is not empty.\n";
   }

   if (emptyString.empty())
   {
      std::cout<<"\nThe emptyString string is empty.\n";
   }
   else
   {
      std::cout<<"\nThe emptyString string is not empty.\n";
   }
}
