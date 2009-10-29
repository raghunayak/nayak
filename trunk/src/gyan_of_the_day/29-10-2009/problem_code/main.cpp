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

// The C++ Gyan of the day application for the day 29-Oct-2009.
//
// This application is about the c-style functions inside the namespace.

////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>

#include <utility.h>

using namespace utility;

////////////////////////////////////////////////////////////////////////////////

int main(int /*argc*/, char */*argv*/[])
{

    std::cout<<"\nThe sqaure of 5 is "<<getSquare(5);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
