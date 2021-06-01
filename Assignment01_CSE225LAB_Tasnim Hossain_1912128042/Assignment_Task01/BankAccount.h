#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED
class Account{
public:
    string name;
    int age;
    float balance = 0;

public:
    Account(string name, int age){
        accountName = name;
        accountage = age;

    }

};



#endif // BANKACCOUNT_H_INCLUDED
