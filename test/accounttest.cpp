
#include "doctest.h"
#include "account.h"

TEST_CASE("Account Constructors & Getters") {
    BudgetBuddy::Account acc("test", 1234);
    CHECK(acc.getName() == "test");
    CHECK(acc.getBalance() == 1234);
}