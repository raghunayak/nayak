/*
 * Copyright (c) 2009 Raghavendra Nayak
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
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
