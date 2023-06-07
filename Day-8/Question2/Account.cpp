#include "Account.h"
#include <iostream>

// Default constructor
Amount::Amount() {
    // Initialize member variables with default values
    accountId = "";
    accountBalance = 0.0;
    accountType = SAVING;
    accountHolderName = "";
}

// Parameterized constructor
Amount::Amount(const std::string& id, double balance, AccountType type, const std::string& holderName) {
    accountId = id;
    accountBalance = balance;
    accountType = type;
    accountHolderName = holderName;
}

// Accessors
std::string Amount::getAccountId() const {
    return accountId;
}

double Amount::getAccountBalance() const {
    return accountBalance;
}

AccountType Amount::getAccountType() const {
    return accountType;
}

std::string Amount::getAccountHolderName() const {
    return accountHolderName;
}

std::vector<Transaction> Amount::getAccountLastTransactions() const {
    return accountLastTransactions;
}

// Mutators
void Amount::setAccountId(const std::string& id) {
    accountId = id;
}

void Amount::setAccountBalance(double balance) {
    accountBalance = balance;
}

void Amount::setAccountType(AccountType type) {
    accountType = type;
}

void Amount::setAccountHolderName(const std::string& holderName) {
    accountHolderName = holderName;
}

void Amount::setAccountLastTransactions(const std::vector<Transaction>& lastTransactions) {
    accountLastTransactions = lastTransactions;
}

// Display account details
void Amount::displayAccountDetails() const {
    std::cout << "Account ID: " << accountId << std::endl;
    std::cout << "Account Balance: " << accountBalance << std::endl;
    std::cout << "Account Type: " << (accountType == SAVING ? "SAVING" : "CURRENT") << std::endl;
    std::cout << "Account Holder Name: " << accountHolderName << std::endl;
    // Display last transactions
    std::cout << "Last Transactions: " << std::endl;
    for (const Transaction& transaction : accountLastTransactions) {
        std::cout << "  - Amount: " << transaction.getTransactionAmount() << std::endl;
        std::cout << "    Recipient Name: " << transaction.getTransactionRecipientName() << std::endl;
        std::cout << "    Transaction Type: " << transaction.getTransactionType() << std::endl;
    }
}
