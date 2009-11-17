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

#include <iostream>

////////////////////////////////////////////////////////////////////////////////

/// @brief Some random class.
class SomeClass {
public:

    /// @brief The class constructor Method.
    SomeClass() {
        m_printNumber_funcPtr = &SomeClass::printNumber;
        (this->*m_printNumber_funcPtr)(10);
    }

    /// @brief Method which prints the given number.
    /// @param number   The number to print.
    void printNumber(int number) {
        std::cout<<"Given number is "<<number;
    }
private:

    /// The function pointer type.
    typedef void (SomeClass::*printNumberFuncPtr_type)(int data);

    /// The actual function pointer
    printNumberFuncPtr_type m_printNumber_funcPtr;
};

////////////////////////////////////////////////////////////////////////////////

/// @brief The main function.
int main(int argc, char *argv[])
{
    SomeClass object;

    return 0x0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
