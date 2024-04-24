/***********************************************************************
// Workshop # 8, Virtual Functions and Abstract Base Classes
//
// File: SavingsAccount.cpp
// Version 1.0
// Date:
// Author:
// Description
// This file implements the SavingsAccount class
// -----------------------------------------------------------
// Name            Date            Reason
//
***********************************************************************/
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
// SavingsAccount.cpp
#include "SavingsAccount.h"
#include <iomanip>

namespace seneca {

    SavingsAccount::SavingsAccount(double balance, double interestRate)
        : Account(balance), m_interestRate(interestRate > 0 ? interestRate : 0) {}

    void SavingsAccount::monthEnd() {
        double interest = balance() * m_interestRate;
        credit(interest);
    }

    void SavingsAccount::display(std::ostream& out) const {
        out << "Account type: Savings" << std::endl;
        out << std::fixed << std::setprecision(2); // Set fixed floating point representation with 2 decimal places
        out << "Balance: $" << balance() << std::endl;
        out << "Interest Rate (%): " << m_interestRate * 100.0 << std::endl;
    }

}
