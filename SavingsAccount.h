/***********************************************************************
// Workshop # 8, Virtual Functions and Abstract Base Classes
//
// File: SavingAccount.h
// Version 1.0
// Date:
// Author:
// Description
// This file defines the SavingsAccount class
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
// SavingsAccount.h
#ifndef SENECA_SAVINGSACCOUNT_H
#define SENECA_SAVINGSACCOUNT_H

#include "Account.h"

namespace seneca {

    class SavingsAccount : public Account {
        double m_interestRate;

    public:
        SavingsAccount(double balance, double interestRate);
        void monthEnd();
        void display(std::ostream& out) const;
    };

}

#endif
