#include <iostream>
#include <BankAccount.h>

BankAccount::BankAccount( const std::string& accNum, const std::string& owner,
     double initialBalance)
     : accountNumber(accNum), ownerName(owner), balance(initialBalance) {}

void BankAccount::deposit(double amount){
    if(amount > 0) balance += amount;
}

bool BankAccount::withdraw(double amount){
    if( balance > 0 && balance >= amount){
        balance -= amount;
        return true;
    }
    return false;
}

double BankAccount::getBalance() const {
    return balance;
}

const std::string& BankAccount::getAccountNumber() const {
    return accountNumber;
}

const std::string& BankAccount::getOwnerName() const {
    return ownerName;
}

void BankAccount::printStatement() const {
    std::cout << "Номер счета: " << accountNumber << std::endl << "Имя держателя счета: " << ownerName << std::endl << "Баланс: " << balance << std::endl;
}
