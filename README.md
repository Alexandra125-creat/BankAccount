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
