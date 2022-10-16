#include <iostream>
#include "SavingAccount.h"
using namespace std;

SavingAccount::SavingAccount(double bal, double iRate, double c)
{
    transactFee = c;
    if (bal > 0)
        balance = bal;
    else
        balance = 0;
    if (iRate > 0)
        interestRate = iRate;
    else
        interestRate = 0;
}
void SavingAccount::print()
{
    Account::print();
    cout << "transaction fee of withdraw: " << transactFee << endl;
}
bool SavingAccount::debit(double withdw)
{
    if (withdw > 0 && withdw <= balance + transactFee)
    {
        balance = balance - withdw - transactFee;
        return true;
    }
    else
        cout << " Debit amount exceeded account balance." << endl;
    return false;
}