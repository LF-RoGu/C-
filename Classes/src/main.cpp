#include <iostream>
#include "stdint.h"
#include <vector>
/*
 * Method to add personal library
 */
#include "../lib/Account.h"


using namespace std;

class class_person
{
public:
    string personName_str;
    uint8_t personAge_u8;
    uint8_t personGender_u8;

};

int main()
{
    class_person Frank;

    Frank.personName_str = "Frank";
    Frank.personAge_u8 = 32;
    Frank.personGender_u8 = 'M';

    class_person *Guy = new class_person;
    (*Guy).personName_str = "Guy";
    (*Guy).personAge_u8 = 16;
    (*Guy).personGender_u8 = 'M';

    Account enemy;
    enemy.accountDeposit = 1000;

    return 0;
}
