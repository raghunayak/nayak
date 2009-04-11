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

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief function to find the factorial of a number.
 *
 * This function returns number! (the factorial of number).
 * For negative number, number! is defined to be 1.
 *
 * @param[in] number    the number for which you want to find the factorial.
 * @return  The factorial of the @sa number.
 *
 * Note: This function uses a loop to find the factorial.
 */
int factorial(const int number)
{
    int result = 1;
    int i;
    for (i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}

int main(void)
{
    int number;
    int factorial_of_number;

    printf("\nEnter the input number: ");
    scanf("%d", &number);

    factorial_of_number = factorial(number);

    printf("\nInput number is: %d", number);
    printf("\nFactorial of %d or %d! is %d\n", number, number, factorial_of_number);

    return EXIT_SUCCESS;
}
