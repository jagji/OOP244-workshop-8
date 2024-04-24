/***********************************************************************
// Workshop # 8, Virtual Functions and Abstract Base Classes
//
// File: ChequingAccount.cpp
// Version 1.0
// Date:
// Author:
// Description
// This file implements the ChequingAccount class
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
// ChequingAccount.cpp

#include "ChequingAccount.h"

namespace seneca {

    // Constructor initializes the account balance and the transaction and monthly fees
    ChequingAccount::ChequingAccount(double balance, double transactionFee, double monthlyFee)
        : Account(balance), m_transactionFee(transactionFee > 0 ? transactionFee : 0.0),
        m_monthlyFee(monthlyFee > 0 ? monthlyFee : 0.0) {}

    // Credit adds money to the account balance and deducts the transaction fee
    bool ChequingAccount::credit(double amount) {
        if (Account::credit(amount)) {
            return Account::debit(m_transactionFee);
        }
        return false;
    }

    // Debit withdraws money from the account balance and deducts the transaction fee
    bool ChequingAccount::debit(double amount) {
        if (Account::debit(amount + m_transactionFee)) {
            return true;
        }
        return false;
    }

    // monthEnd deducts the monthly fee from the balance
    void ChequingAccount::monthEnd() {
        Account::debit(m_monthlyFee);
    }

    // display outputs the account details to the ostream object
    void ChequingAccount::display(std::ostream& out) const {
        out << "Account type: Chequing" << std::endl;
        out.setf(std::ios::fixed, std::ios::floatfield); // Set fixed floating point representation
        out.precision(2); // Set precision to 2 decimal places
        out << "Balance: $" << balance() << std::endl;
        out << "Per Transaction Fee: " << m_transactionFee << std::endl;
        out << "Monthly Fee: " << m_monthlyFee << std::endl;
        out.unsetf(std::ios::fixed); // Unset fixed precision formatting if needed elsewhere
    }

}
