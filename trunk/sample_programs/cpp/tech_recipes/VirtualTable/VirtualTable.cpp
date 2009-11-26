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

// g++ -fdump-class-hierarchy VirtualTable.cpp

#include <iostream>

////////////////////////////////////////////////////////////////////////////////

/// @brief Some random class with two virtual functions.
class SomeClass1 {
public:

    /// @brief The class constructor Method.
    SomeClass1() {}

    /// @brief First virtual function.
    virtual void function1(void) {}

    /// @brief Second virtual function.
    virtual void function2(int) {}

private:
};

class SomeClass2 : SomeClass1 {
public:
    /// @brief The class constructor Method.
    SomeClass2() {}

    /// @brief First over-ridden virtual function.
    virtual void function1(void) {}
};

////////////////////////////////////////////////////////////////////////////////

/// @brief The main function.
int main(int argc, char *argv[])
{
    std::cout<<"\nThe size of the SomeClass1 is: "<<sizeof(SomeClass1);
    std::cout<<"\nThe size of the SomeClass2 is: "<<sizeof(SomeClass2);

    return 0x0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
