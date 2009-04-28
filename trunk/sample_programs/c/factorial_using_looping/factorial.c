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
