/***********************************************************************
// Workshop # 8, Virtual Functions and Abstract Base Classes
//
// File: Account.h
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
// Account.h
#ifndef SENECA_ACCOUNT_H
#define SENECA_ACCOUNT_H

#include "iAccount.h"

namespace seneca {

    class Account : public iAccount {
        double m_balance;

    protected:
        double balance() const;

    public:
        Account(double balance);
        bool credit(double amount);
        bool debit(double amount);
    };

}

#endif
