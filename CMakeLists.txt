cmake_minimum_required(VERSION 3.0.0)
project(BudgetBuddy VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(BudgetBuddy src/main.cpp src/account.cpp)

target_include_directories(BudgetBuddy PRIVATE include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_library(test_main OBJECT test/test_main.cpp)


add_executable(AccountTest test/accounttest.cpp src/account.cpp $<TARGET_OBJECTS:test_main>)
target_include_directories(AccountTest PRIVATE include)
add_test(NAME AccountTest COMMAND AccountTest )