#include "Account.h"
#include <string>
#include <iostream>

Account::Account(string x,int y){
    name=x;
    age=y;
    balance=0;
}
void Account::printAll(){
std::cout<<"Your name: "<<name<<" Age: "<<age<<" Balance: "<<balance<<std::endl;
}
void Account::deposit(double n){
    balance = balance+n;
}
void Account::withdraw(double n){
    if(balance>=n){
        balance=balance-n;
        cout<<"Money withdrawed"<<endl;
    }
    else{
        cout<<"Insufficient Balance"<<endl;
    }

}
