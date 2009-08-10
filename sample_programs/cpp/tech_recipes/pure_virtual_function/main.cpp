/*
 * This code is released under GNU GPL v3 or above License.
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
// base class scope then, you will end up with infinite loop.

#include <iostream>
#include <string>

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
        // Without BankAccount scope, this line will end up in infinite loop
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

    return 0;
}
