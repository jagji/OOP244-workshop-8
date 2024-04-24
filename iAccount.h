/***********************************************************************
// Workshop # 8, Virtual Functions and Abstract Base Classes
//
// File: iAccount.h
// Version 1.0
// Date:
// Author:
// Description
// This file defines the iAccount interface
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
// iAccount.h
#ifndef SENECA_IACCOUNT_H
#define SENECA_IACCOUNT_H

#include <iostream>

namespace seneca {

    class iAccount {
    public:
        virtual bool credit(double amount) = 0;
        virtual bool debit(double amount) = 0;
        virtual void monthEnd() = 0;
        virtual void display(std::ostream& out) const = 0;
        virtual ~iAccount() {}
    };

    // Allocator function
    iAccount* CreateAccount(const char* type, double balance);

}

#endif
