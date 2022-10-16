#ifndef CheckingAccount_H
#define CheckingAccount_H
#include"Account.h"
class SavingAccount;
class CheckingAccount : public Account
{
    friend bool CheckingToSaving(CheckingAccount&, SavingAccount&, const double);
    friend bool SavingToChecking(SavingAccount&, CheckingAccount&, const double);
    public:
    CheckingAccount(double = 0.0, double =0.0, double =3.0, double = 2.0);
    // Parameters: balance, interest rate, transaction fee for withdraw, transaction fee for deposition
    bool debit(double =0.0); // return true if it can be done successfully.
    void credit(double =0.0);
    void print();
    private:
    double transactFeeW; // withdraw
    double transactFeeD; // Deposit
};
#endif