#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>
#include "Account.h"

typedef float (*AccountOperation)(const std::vector<Amount>&);

float getAccountWithHighestTotalTransactions(const std::vector<Amount>& accounts);
float getHighestTransactionAmount(const std::vector<Amount>& accounts);

#endif  // FUNCTIONALITIES_H
