/***********************************************************************
// Workshop # 8, Virtual Functions and Abstract Base Classes
//
// File: Account.cpp
// Version 1.0
// Date:
// Author:
// Description
// This file implements the Account class
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
// Account.cpp
#include "Account.h"

namespace seneca {

    Account::Account(double balance) : m_balance(balance > 0.0 ? balance : 0.0) {}

    bool Account::credit(double amount) {
        if (amount > 0) {
            m_balance += amount;
            return true;
        }
        return false;
    }

    bool Account::debit(double amount) {
        if (amount > 0 && amount <= m_balance) {
            m_balance -= amount;
            return true;
        }
        return false;
    }

    double Account::balance() const {
        return m_balance;
    }

}
