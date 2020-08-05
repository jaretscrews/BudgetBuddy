#pragma once

#include "transaction.h"

#include <string>
#include <list>

namespace BudgetBuddy{
    class Account{
    public:
        Account();
        Account(std::string, int);

        std::string getName() const {return name;}
        int getBalance() const {return balance;}

    private:
        std::string name;
        int balance;
        std::list<Transaction> transactions;
    };
}