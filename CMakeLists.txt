cmake_minimum_required(VERSION 4.1)
project(OOP_Project_YEAR1)

set(CMAKE_CXX_STANDARD 20)

include_directories(Classes Pages)

add_executable(OOP_Project_YEAR1 main.cpp
        Classes/menuItem.cpp
        Classes/menuItem.h
        Classes/menu.cpp
        Classes/menu.h
        Classes/foodItem.cpp
        Classes/foodItem.h
        Classes/drinkItem.cpp
        Classes/drinkItem.h
        Classes/table.cpp
        Classes/table.h
        Classes/order.cpp
        Classes/order.h
        Classes/bill.cpp
        Classes/bill.h
        Classes/waiter.cpp
        Classes/waiter.h
        Pages/pages.cpp
        Pages/pages.h
        Pages/billSettings.cpp
        Pages/orderPage.cpp
        Pages/menupage.cpp
)
