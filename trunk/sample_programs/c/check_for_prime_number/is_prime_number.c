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
