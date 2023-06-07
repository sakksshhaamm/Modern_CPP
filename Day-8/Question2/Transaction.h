#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
private:
    double transactionAmount;
    std::string transactionRecipientName;
    std::string transactionType;

public:
    // Constructors
    Transaction();
    Transaction(double amount, const std::string& recipientName, const std::string& type);

    // Accessors
    double getTransactionAmount() const;
    std::string getTransactionRecipientName() const;
    std::string getTransactionType() const;

    // Mutators
    void setTransactionAmount(double amount);
    void setTransactionRecipientName(const std::string& recipientName);
    void setTransactionType(const std::string& type);
};

#endif  // TRANSACTION_H
