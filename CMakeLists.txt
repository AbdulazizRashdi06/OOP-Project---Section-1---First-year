cmake_minimum_required(VERSION 4.1)
project(OOP_Project_YEAR1)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOP_Project_YEAR1 main.cpp
        menuItem.cpp
        menuItem.h
        menu.cpp
        menu.h
        foodItem.cpp
        foodItem.h
        drinkItem.cpp
        drinkItem.h
        table.cpp
        table.h
        order.cpp
        order.h
        bill.cpp
        bill.h
        waiter.cpp
        waiter.h
        pages.cpp
        pages.h)
