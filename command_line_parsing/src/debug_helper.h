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

#ifndef _DEBUG_HELPER_H_
#define _DEBUG_HELPER_H_

#if defined __cplusplus && __GNUC_PREREQ (2,95)
#define MY_VOID_CAST static_cast<void>
#else
#define MY_VOID_CAST (void)
#endif // #if defined __cplusplus && __GNUC_PREREQ (2,95)

#ifdef NDEBUG
#define debug_str(string)
#define fixme_str(string)
#else

#include <stdio.h>

/**
 * @brief function to output the Debug string to the stderr device.
 * @param string the Debug error string.
 * @return none.
 */
void debug_str(const char *string)
{
    fprintf(stderr, "\n +++ Debug: %s\n", string);
    fflush(stderr);
}

/**
 * @brief function to output the FixMe string.
 * @param string the FixMe error string.
 * @return none.
 */
void fixme_str(const char *string)
{
    fprintf(stderr, "\n *** FixMe: %s\n", string);
    fflush(stderr);
}

#endif // #ifdef NDEBUG

#endif // _DEBUG_HELPER_H_
