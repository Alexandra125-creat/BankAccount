# Bank System — консольное приложение на C++

## О проекте
Консольное приложение для управления банковскими счетами.

## Роли
- Архитектор  (Team Lead): Краснова Александра
- Разработчик 1  (Developer 1): Бричков Захар
- Разработчик 2  (Developer 2): Бредихин Александр
- Тестировщик (QA Engineer): Бричков Захар, Бредихин Александр
- Технический писатель (Tech Writer): Краснова Александра

## Инструкция по сборке
```bash
mkdir build && cd build
cmake ..
make
./BankSystem

## Структура проекта
BankSystem/
├── .gitignore
├── CMakeLists.txt
├── README.md
├── include/
│   ├── BankAccount.h
│   └── Bank.h
├── src/
│   ├── BankAccount.cpp
│   └── Bank.cpp
└── main.cpp

##Класс №1 - BankAccount
Методы
BankAccount(accNumber, owner, balance) - Конструктор с параметрами
deposit(double amount) - Пополнение счета (возвращает true при успехе)
withdraw(double amount)	- Снятие средств с проверкой остатка
getBalance()	- Получение текущего баланса
getAccountNumber()	- Получение номера счета
getOwnerName()	- Получение имени владельца
printStatement()	- Вывод выписки по счету

##Класс №2 - Bank
Методы
createAccount(owner)	- Создание нового счета (автоматическая генерация номера)
findAccount(accNumber)	- Поиск счета по номеру (возвращает указатель или nullptr)
getTotalBankBalance()	- Суммарный баланс всех счетов
listAllAccounts()	- Вывод списка всех счетов
getAccountCount()	- Количество открытых счетов

Пример работы программы:

Проблемы и решения:
