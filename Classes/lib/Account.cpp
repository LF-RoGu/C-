//
// Created by luis on 11/3/23.
//

#include "Account.h"

uint16_t class_bankAccount::getAccountId() {
    return accountId_u16;
}

void class_bankAccount::setAccountId(uint16_t accountIdU16) {
    accountId_u16 = accountIdU16;
}

uint16_t class_bankAccount::getAccountBalance() {
    return accountBalance_u8;
}

void class_bankAccount::setAccountBalance(uint16_t accountBalanceU8) {
    accountBalance_u8 = accountBalanceU8;
}
uint16_t class_bankAccount::funct_withdrawIntoAccount(uint16_t varAccountId, uint16_t varAccountAmount, bool *varSuccessfullOperation)
{
    *varSuccessfullOperation = false;
    if((accountId_u16 == varAccountId) && (accountId_u16 != 0))
    {
        accountBalance_u8 -= varAccountAmount;
        *varSuccessfullOperation = true;
    }
    else
    {
        *varSuccessfullOperation = false;
    }
    return accountBalance_u8;
}
uint16_t class_bankAccount::funct_depositIntoAccount(uint16_t varAccountId, uint16_t varAccountAmount, bool *varSuccessfullOperation)
{
    *varSuccessfullOperation = false;
    if((accountId_u16 == varAccountId) && (accountId_u16 != 0))
    {
        accountBalance_u8 += varAccountAmount;
        *varSuccessfullOperation = true;
    }
    else
    {
        *varSuccessfullOperation = false;
    }
    return accountBalance_u8;
}
