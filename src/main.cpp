#include <iostream>
#include <string>
#include "account.h"

int main(int, char**) {
    std::string name = "test";
    BudgetBuddy::Account acc(name, 123);
    std::cout << "Hello, world!\n";
}
