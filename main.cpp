#include <iostream>
#include <string>
#include "Bank.h"

int main() {
    std::cout << "========================================\n";
    std::cout << "      БАНКОВСКАЯ СИСТЕМА v1.0\n";
    std::cout << "========================================\n\n";

    Bank bank;

    std::cout << "📌 Создание счетов:\n";
    bank.createAccount("Иван Петров");
    bank.createAccount("Мария Смирнова");
    bank.createAccount("Алексей Иванов");
    std::cout << "\n";

    BankAccount* acc1 = bank.getAccount("ACC1000");
    BankAccount* acc2 = bank.getAccount("ACC1001");

    if (acc1) {
        std::cout << "💳 Пополнение счета " << acc1->getAccountNumber() << " на 5000 руб.\n";
        acc1->deposit(5000);
        acc1->printStatement();
    }

    if (acc2) {
        std::cout << "💸 Снятие 2000 руб. со счета " << acc2->getAccountNumber() << "\n";
        if (acc2->withdraw(2000))
            std::cout << "✅ Снятие успешно\n";
        else
            std::cout << "❌ Недостаточно средств\n";
        acc2->printStatement();
    }

    std::cout << "\n📋 Все счета в банке:\n";
    bank.listAllAccounts();

    std::cout << "\n💰 Общий баланс банка: "
              << bank.totalBankBalance() << " руб.\n";

    std::cout << "========================================\n";
    std::cout << "      ТЕСТИРОВАНИЕ ЗАВЕРШЕНО\n";
    std::cout << "========================================\n";

    return 0;
}