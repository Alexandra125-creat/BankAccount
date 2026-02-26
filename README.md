# Bank System — консольное приложение на C++

## О проекте
Консольное приложение для управления банковскими счетами.

## Команда и роли
- **Архитектор (Team Lead)**: Краснова Александра — создание структуры проекта, CMakeLists.txt, организация работы команды, управление репозиторием
- **Разработчик 1 (Developer 1)**: Бричков Захар — реализация класса `BankAccount`
- **Разработчик 2 (Developer 2)**: Бредихин Александр — реализация класса `Bank`
- **Тестировщик (QA Engineer)**: Бричков Захар, Бредихин Александр — написание `main.cpp`, интеграционное тестирование, проверка сценариев
- **Технический писатель (Tech Writer)**: Краснова Александра — документация, README, фиксация диалогов с нейросетью
### Предварительные требования
- WSL2 с дистрибутивом Ubuntu
- Visual Studio Code с расширениями: C/C++, CMake Tools, Remote - WSL
- Компилятор g++ (версия 9 или выше), CMake, Git (установлены в WSL)
## Структура проекта

    BankSystem/
        .gitignore
        CMakeLists.txt
        README.md
        include/
            BankAccount.h
            Bank.h
        src/
            BankAccount.cpp
            Bank.cpp
        main.cpp
## Класс №1 - BankAccount
### Методы
- BankAccount(accNumber, owner, balance)	-Конструктор с параметрами
- deposit(double amount)	- Пополнение счета (возвращает true при успехе)
- withdraw(double amount)	- Снятие средств с проверкой остатка
- getBalance()	- Получение текущего баланса
- getAccountNumber()	- Получение номера счета
- getOwnerName()	- Получение имени владельца
- printStatement()	- Вывод выписки по счету

## Класс №2 - Bank
### Методы
- createAccount(owner)	- Создание нового счета (автоматическая генерация номера)
- findAccount(accNumber)	- Поиск счета по номеру (возвращает указатель или nullptr)
- getTotalBankBalance()	- Суммарный баланс всех счетов
- listAllAccounts()	-Вывод списка всех счетов
- getAccountCount()	- Количество открытых счетов

## Пример работы прораммы

## Проблемы и решения

## Инструкция по сборке
```bash
mkdir build && cd build
cmake ..
make
./BankSystem
