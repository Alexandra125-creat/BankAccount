#include "Bank.h"
#include <iostream>
#include <iomanip>

void Bank::createAccount(const std::string& owner) {
    static int counter = 1000;
    std::string accNum = "ACC" + std::to_string(counter++);
    accounts.emplace_back(accNum, owner, 0.0);
    std::cout << "Создан счет: " << accNum << " для " << owner << "\n";
}

BankAccount* Bank::getAccount(const std::string& accNum) {
    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accNum) return &acc;
    }
    return nullptr;
}

double Bank::totalBankBalance() const {
    double total = 0;
    for (const auto& acc : accounts) {
        total += acc.getBalance();
    }
    return total;
}

void Bank::listAllAccounts() const {
    for (const auto& acc : accounts) {
        acc.printStatement();
    }
}
