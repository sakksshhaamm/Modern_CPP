#include "functionalities.h"
#include "iostream"

float getAccountWithHighestTotalTransactions(const std::vector<Amount>& accounts) {
    float highestTotalTransactions = 0.0;
    std::string accountIdWithHighestTotalTransactions;

    for (const Amount& account : accounts) {
        float totalTransactions = 0.0;
        for (const Transaction& transaction : account.getAccountLastTransactions()) {
            totalTransactions += transaction.getTransactionAmount();
        }

        if (totalTransactions > highestTotalTransactions) {
            highestTotalTransactions = totalTransactions;
            accountIdWithHighestTotalTransactions = account.getAccountId();
        }
    }

    std::cout << "Account with the highest total transactions: " << accountIdWithHighestTotalTransactions << std::endl;
    std::cout << "Total transactions amount: " << highestTotalTransactions << std::endl;

    return highestTotalTransactions;
}

float getHighestTransactionAmount(const std::vector<Amount>& accounts) {
    float highestTransactionAmount = 0.0;

    for (const Amount& account : accounts) {
        for (const Transaction& transaction : account.getAccountLastTransactions()) {
            if (transaction.getTransactionAmount() > highestTransactionAmount) {
                highestTransactionAmount = transaction.getTransactionAmount();
            }
        }
    }

    std::cout << "Highest transaction amount: " << highestTransactionAmount << std::endl;

    return highestTransactionAmount;
}
