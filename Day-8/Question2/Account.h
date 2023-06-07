#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "Transaction.h"
#include "AccountType.h"


class Amount {
private:
    std::string accountId;
    double accountBalance;
    AccountType accountType;
    std::string accountHolderName;
    std::vector<Transaction> accountLastTransactions;

public:
    // Constructors
    Amount();
    Amount(const std::string& id, double balance, AccountType type, const std::string& holderName);

    // Accessors
    std::string getAccountId() const;
    double getAccountBalance() const;
    AccountType getAccountType() const;
    std::string getAccountHolderName() const;
    std::vector<Transaction> getAccountLastTransactions() const;

    // Mutators
    void setAccountId(const std::string& id);
    void setAccountBalance(double balance);
    void setAccountType(AccountType type);
    void setAccountHolderName(const std::string& holderName);
    void setAccountLastTransactions(const std::vector<Transaction>& lastTransactions);

    // Other member functions
    void displayAccountDetails() const;
};

#endif  // ACCOUNT_H
