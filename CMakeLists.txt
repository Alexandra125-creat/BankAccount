cmake_minimum_required(VERSION 3.10)

project(BankAccount)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(${PROJECT_NAME}

    main.cpp

    src/BankAccount.cpp

    src/Bank.cpp

    include/BankAccount.h

    include/Bank.h

)