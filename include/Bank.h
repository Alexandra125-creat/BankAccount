#ifndef BANK_H
#define BANK_H

#include <vector>
#include <string>
#include "BankAccount.h"

class Bank {
private:
    std::vector<BankAccount> accounts;

public:
    void createAccount(const std::string& owner);
    BankAccount* getAccount(const std::string& accNum);
    double totalBankBalance() const;
    void listAllAccounts() const;
};

#endif
