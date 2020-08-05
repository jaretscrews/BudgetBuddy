#include "account.h"

namespace BudgetBuddy{
    Account::Account() : name(""), balance(0), transactions({}) {}
    Account::Account(std::string name, int balance) : name(name), balance(balance), transactions({}) {}
}