#include<iostream>
#include"CheckingAccount.h"
using namespace std;
CheckingAccount::CheckingAccount(double bal,double iRate, double c, double d)
{
    transactFeeW = c;
    transactFeeD = d;
    if (bal >0)
    balance = bal;
    else
    balance = 0;
    if(iRate >0)
    interestRate = iRate;
    else interestRate = 0;
}
void CheckingAccount::print()
{
    Account::print();
    cout << "Transaction fee of withdraw: " << transactFeeW << endl;
    cout << "Transaction fee of Deposit: " << transactFeeD << endl;
}
bool CheckingAccount::debit(double withdw)
{
    if(withdw >0 && withdw <= balance+transactFeeW)
    {
    balance = balance - withdw-transactFeeW;
    return true;
    }
    else
    cout << " Debit amount exceeded account balance." << endl;
    return false;
}
void CheckingAccount::credit(double depos)
{
    if(depos > 0)
    balance = balance + depos - transactFeeD;
}