#include "Transaction.h"

// Default constructor
Transaction::Transaction() {
    transactionAmount = 0.0;
    transactionRecipientName = "";
    transactionType = "";
}

// Parameterized constructor
Transaction::Transaction(double amount, const std::string& recipientName, const std::string& type) {
    transactionAmount = amount;
    transactionRecipientName = recipientName;
    transactionType = type;
}

// Accessors
double Transaction::getTransactionAmount() const {
    return transactionAmount;
}

std::string Transaction::getTransactionRecipientName() const {
    return transactionRecipientName;
}

std::string Transaction::getTransactionType() const {
    return transactionType;
}

// Mutators
void Transaction::setTransactionAmount(double amount) {
    transactionAmount = amount;
}

void Transaction::setTransactionRecipientName(const std::string& recipientName) {
    transactionRecipientName = recipientName;
}

void Transaction::setTransactionType(const std::string& type) {
    transactionType = type;
}
