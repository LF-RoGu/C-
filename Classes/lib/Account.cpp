//
// Created by luis on 11/3/23.
//

#include "Account.h"

uint16_t Account::getAccountId() {
    return accountId_u16;
}

void Account::setAccountId(uint16_t accountIdU16) {
    accountId_u16 = accountIdU16;
}

uint16_t Account::getAccountBalance() {
    return accountBalance_u8;
}

void Account::setAccountBalance(uint16_t accountBalanceU8) {
    accountBalance_u8 = accountBalanceU8;
}
uint16_t Account::funct_withdrawIntoAccount(uint16_t varAccountId, uint16_t varAccountAmount)
{
    if((accountId_u16 == varAccountId) && (accountId_u16 != 0))
    {
        accountBalance_u8 -= varAccountAmount;
    }
    else
    {
        puts("Account ID does not matches from the input");
    }
    return accountBalance_u8;
}
uint16_t Account::funct_depositIntoAccount(uint16_t varAccountId, uint16_t varAccountAmount)
{
    if((accountId_u16 == varAccountId) && (accountId_u16 != 0))
    {
        accountBalance_u8 += varAccountAmount;
    }
    else
    {
        puts("Account ID does not matches from the input");
    }
    return accountBalance_u8;
}
