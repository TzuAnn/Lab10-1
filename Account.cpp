#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(double bal,double iRate )
{
if (bal >0)
balance = bal;
else
balance = 0;
if(iRate >0)
interestRate = iRate;
else interestRate = 0;
}
void Account::credit(double depos)
{
if(depos > 0)
balance = balance + depos;
}
double Account::getBalance()
{
    return balance;
}
bool Account::debit(double withdw)
{
if(withdw >0 && withdw <= balance)
{
balance = balance - withdw;
return true;
}
else if(withdw > balance)
{
cout << " Debit amount exceeded account balance." << endl;
return false;
}
return false;
}
double Account::calculateInterest()
{
    balance = balance + balance*interestRate;
    return interestRate;
}
void Account::print()
{
cout << " Balance: " << balance <<
endl;
cout << " Interest rate: " <<
interestRate << endl;
}