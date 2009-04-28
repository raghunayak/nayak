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
#include <string.h>

/**
 * @brief function to return the given string length.
 * @param[in] string the input string.
 * @return the string length.
 */
unsigned int get_string_length(const char *string)
{
    int i;
    int string_length = 0;

    for (i = 0; string[i] != 0 && string[i] != '\n'; ++i)
        ++string_length;
    return string_length;
}

/**
 * @brief function to reverse the given string.
 * @param[in] string the input string.
 * @param[out] rev_string the reversed string would be placed in this variable.
 * @return none.
 */
void reverse(const char *in_string, char *rev_string)
{
    int i, j;
    unsigned int length;

    length = get_string_length(in_string);

    for (i = length-1, j = 0; i >= 0; --i, ++j)
        rev_string[j] = in_string[i];

    /* mark the end of string */
    rev_string[j] = 0;
}

int main()
{
    const int max_size = 100;
    int string_length = 0;

    char string[max_size];
    char reverse_string[max_size];

    printf("\nPlease enter input string: ");
    /* Note: we are not using gets, because gets is deprecated and can be
       dangerous. */
    fgets(string, max_size, stdin);

    /* remove any new line from input string,
       if fgets has put '\n' at the end of string */
    string_length = get_string_length(string);
    string[string_length] = 0;

    /* get the reversed string */
    reverse(string, reverse_string);

    /* now compare */
    if (!strcmp(string, reverse_string)) {
        printf("\nEntered string = %s, reversed string = %s."
               "\n%s = %s, hence %s is a palindrome.\n",
               string, reverse_string, string, reverse_string, string);
    } else {
        printf("\nEntered string = %s, reversed string = %s."
               "\n%s != %s, hence %s is not a palindrome.\n",
               string, reverse_string, string, reverse_string, string);
    }
    return 0;
}
