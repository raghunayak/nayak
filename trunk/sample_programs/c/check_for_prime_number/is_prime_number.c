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
 * @brief function to check if the given number is prime.
 *
 * This function returns 1 if the given number is a prime number,
 * otherwise returns 0.
 *
 * @param[in] number    input number to check for prime number.
 * @return  1: if the @sa number is a prime number;
 *          0: otherwise.
 *
 * Note: This function uses a loop to find the factorial.
 */
unsigned short is_prime_number(const int number)
{
    int i;

    /* Trivial case 1: number 1, 0 numbers are not prime numbers */
    /* -ve numbers are not natural numbers */
    if (number <= 1)
        return 0;

    /* Trivial case 2: even numbers are not prime numbers */
    if (number % 2 == 0)
        return (number == 2) ? 1 : 0;

    /* here, number is is odd and number >= 3 */

    /* Try to divide number by every odd number i, starting from 3 */
    for (i = 3; ; i += 2) {
        /* We only have to try i up to the squre root of number */
        if (i > number/i)
            break;

        /* Now, we have i <= number/i < number */
        /* If number is divisible by i, number is not prime */
        if (number % i == 0)
            return 0;
    }
    /* number has no integer factor in the range (1, number), and thus is prime */
    return 1;
}

int main(void)
{
    int number;
    unsigned short prime_number;

    printf("\nEnter the input number: ");
    scanf("%d", &number);

    prime_number = is_prime_number(number);

    if (prime_number) {
        printf("\nInput number %d is a prime number.\n", number);
    } else {
        printf("\nInput number %d is not a prime number.\n", number);
    }
    return EXIT_SUCCESS;
}
