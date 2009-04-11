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
