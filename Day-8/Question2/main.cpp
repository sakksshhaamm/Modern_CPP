#include <iostream>
#include <vector>
#include "Account.h"
#include "functionalities.h"

int main()
{
    // Create some sample accounts
    Amount account1("A001", 1000.0, SAVING, "John Doe");
    std::vector<Transaction> transactions1 = {Transaction(500.0, "Alice", "Deposit"),
                                              Transaction(-200.0, "Bob", "Withdraw")};
    account1.setAccountLastTransactions(transactions1);

    Amount account2("A002", 2500.0, CURRENT, "Jane Smith");
    std::vector<Transaction> transactions2 = {Transaction(100.0, "Mark", "Deposit"),
                                              Transaction(-50.0, "Alice", "Withdraw"),
                                              Transaction(-300.0, "Tom", "Withdraw")};
    account2.setAccountLastTransactions(transactions2);

    // Create a container of accounts
    std::vector<Amount> accounts = {account1, account2};

    // Perform operations using lambdas
    AccountOperation getAccountWithHighestTotal = [](const std::vector<Amount> &accounts)
    {
        return getAccountWithHighestTotalTransactions(accounts);
    };

    AccountOperation getHighestTransaction = [](const std::vector<Amount> &accounts)
    {
        return getHighestTransactionAmount(accounts);
    };

    // Execute the operations
    getAccountWithHighestTotal(accounts);
    getHighestTransaction(accounts);

    return 0;
}
