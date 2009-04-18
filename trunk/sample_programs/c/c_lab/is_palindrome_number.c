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
