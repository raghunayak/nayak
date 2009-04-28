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

/* C program to check whether the entered number is positive or negative. */

#include <stdio.h>

int main()
{
    int number;

    printf("\nPlease enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("\nEntered number %d is a positive number.", number);
    }
    else if (number < 0)
    {
        printf("\nEntered number %d is a negative number.", number);
    }
    else // number == 0
    {
        printf("\nEntered number %d is zero.", number);
    }
    return 0;
}
