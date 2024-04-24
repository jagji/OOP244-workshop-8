/***********************************************************************
// Workshop # 8, Virtual Functions and Abstract Base Classes
//
// File: ChequingAccount.h
// Version 1.0
// Date:
// Author:
// Description
// This file defines the Account class
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
// ChequingAccount.h

#ifndef SENECA_CHEQUINGACCOUNT_H
#define SENECA_CHEQUINGACCOUNT_H

#include "Account.h"

namespace seneca {

    class ChequingAccount : public Account {
        double m_transactionFee;
        double m_monthlyFee;

    public:
        ChequingAccount(double balance, double transactionFee, double monthlyFee);
        bool credit(double amount);
        bool debit(double amount);
        void monthEnd();
        void display(std::ostream& out) const;
    };

}

#endif // SENECA_CHEQUINGACCOUNT_H
