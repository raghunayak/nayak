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

/* C program to illustrate the linear search algorithm. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int max_size = 100;

    int numbers[max_size];
    int seach_keyword;
    int size;
    int i;

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    if (size > max_size) {
        printf("\nEntered number: %d is greater than the maximum allowed."
               " Currently Max allowed size is %d", size, max_size);
        exit(1);
    }

    printf("\nEnter %d numbers..\n", size);

    for (i = 0; i < size; ++i) {
        scanf("%d", &numbers[i]);
    }

    printf("\nEnter the search keyword: ");
    scanf("%d", &seach_keyword);

    for (i = 0; i < size; ++i) {
        if (numbers[i] == seach_keyword)
            break;
    }

    if (i == size)     {
        printf("\nEntered keyword %d not found in given array.\n", seach_keyword);
    } else {
        printf("\nEntered keyword %d found in position %d.\n", seach_keyword, i+1);
    }
    return 0;
}
