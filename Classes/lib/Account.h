//
// Created by luis on 11/3/23.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
/* Library to be included */
#include "stdint.h"

class class_bankAccount {
private:
    uint16_t accountId_u16;
    uint16_t accountBalance_u8;
public:
    bool accountWithdraw;
    bool accountDeposit;

    uint16_t getAccountId();

    void setAccountId(uint16_t accountIdU16);

    uint16_t getAccountBalance();

    void setAccountBalance(uint16_t accountBalanceU8);

    uint16_t funct_withdrawIntoAccount(uint16_t varAccountId, uint16_t varAccountAmount, bool *varSuccessfullOperation);

    uint16_t funct_depositIntoAccount(uint16_t varAccountId, uint16_t varAccountAmount, bool *varSuccessfullOperation);
};

#endif //ACCOUNT_H
