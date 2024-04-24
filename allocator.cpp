/*/////////////////////////////////////////////////////////////////////////
                          Workshop - 8
Full Name  : jagjit kaur
Student ID#: 156806226
Email      : jkaur682@myseneca.ca
Section    : NII
Date       : 25  march 2024

Authenticity Declaration:

I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////////////*/
// allocator.cpp
#include "iAccount.h"
#include "SavingsAccount.h" // Include the header for SavingsAccount
#include "ChequingAccount.h" // Include the header for ChequingAccount

namespace seneca {

    // Assume SavingsAccount and ChequingAccount have been defined correctly.
    iAccount* CreateAccount(const char* type, double balance) {
        if (type[0] == 'S') {
            // Create a new SavingsAccount object with the provided balance and a fixed interest rate
            return new SavingsAccount(balance, 0.05); // Assume 5% interest rate
        }
        else if (type[0] == 'C') {
            // Create a new ChequingAccount object with the provided balance, transaction fee, and monthly fee
            return new ChequingAccount(balance, 0.50, 2.00); // Assume $0.50 per transaction and $2 monthly fee
        }
        else {
            return nullptr; // If type is not recognized, return nullptr
        }
    }

} // namespace seneca
