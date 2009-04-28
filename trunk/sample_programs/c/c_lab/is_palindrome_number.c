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

/* C program to reverse an integer and to check whether it is an palindrome. */

#include <stdio.h>

int main()
{
    int number;
    int reversed_number;
    int temp_number, reminder;

    printf("\nPlease enter an integer number: ");
    scanf("%d", &number);

    temp_number = number;
    reversed_number = 0;

    while(temp_number > 0) {
        reminder = temp_number % 10;

        temp_number /= 10;

        reversed_number = reversed_number * 10 + reminder;
    }
    printf("\nEntered numbers is: %d, Reversed number is: %d", number, reversed_number);

    if (number == reversed_number) {
        printf("\nSince %d = %d, Entered number %d is an Palindrome number.\n",
               number, reversed_number, number);
    } else {
        printf("\nSince %d != %d, Entered number %d is not an Palindrome number.\n",
               number, reversed_number, number);
    }
    return 0;
}
