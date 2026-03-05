#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount{
    private:
    std::string accountNumber;
    std::string ownerName;
    double balance;

    public:
    BankAccount(const std::string& accNum, const std::string& owner, double initialBalance = 0.0);
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
    std::string getAccountNumber() const;
    std::string getOwnerName() const;
    void printStatement() const;

};


#endif