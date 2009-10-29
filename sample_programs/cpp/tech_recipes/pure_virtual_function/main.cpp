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

// Sample program to demonstrate that even pure virtual functions can also have
// the function body or function definition.

// Skill level: Intermediate

// In this example, BankAccount class is a abstract base class, i.e.; you can
// not create any instance of this class. This class serves as a model for
// different types of bank accounts, such as Saving Bank, Current Account etc

// In this class, we have defined getAccountNumber() as the pure virtual function,
// which makes BankAccount class abstract class.

// Points to Note down
// 1. Pure virtual can also have function definitions in their abstract base class.
// 2. You can not define pure virtual function's body inside the abstract class
// itself.
// 3. While calling the base class pure virtual function, if you forget adding
// base class scope then, you will end up with infinite recursion.

// Please note that, following code is just a proof of concept code. There are
// much better designs available than the one used here. Check our next sample
// for one of such design.

#include <iostream>
#include <string>
#include <cstdlib>

// This is an Abstract base class for Bank Accounts.
class BankAccount {
public:
    /// @brief Constructor method to initialize the data members.
    BankAccount () : mAccountNumber() {}

    /// @brief Method to set the bank account number.
    /// @param accountNumber the account number.
    void setAccountNumber(std::string accountNumber)
    {
        mAccountNumber = accountNumber;
    }

    /// @brief Method to get the bank account number with given prefix applied.
    /// @param prefixString The string to prefix to the bank account number.
    ///        This is a default parameter, if not given empty string is taken
    ///        as the prefix string.
    /// @return The account number with the given prefix applied.
    virtual std::string getAccountNumber(std::string prefixString = std::string()) = 0;

private:
    /// The account number
    std::string mAccountNumber;
};

// Here is the function body of the pure virtual function of BankAccount class.
std::string BankAccount::getAccountNumber(std::string prefixString)
{
    return prefixString + mAccountNumber;
}

// The specialized derived class for Savings Bank Account
class SavingsBankAccount : public BankAccount {
public:
    virtual std::string getAccountNumber(std::string prefixString = std::string())
    {
        // NOTE: BankAccount class scope is necessary!
        // Without BankAccount scope, this line will end up in infinite recursion.
        return BankAccount::getAccountNumber("SB-");
    }
};

int main(void)
{
    SavingsBankAccount account;

    std::cout<<"\nSetting the account number as \"123456\".\n";
    account.setAccountNumber("123456");

    std::cout<<"\nThe savings bank account number is \""
             <<account.getAccountNumber()<<"\".";

    return EXIT_SUCCESS;
}
