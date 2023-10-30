#include <iostream>

using namespace std;

int main()
{
    int8_t highTemperature_f = 100;
    int8_t lowTemperature_f = 4;

    /* Set that ptr temperature is pointing to the value of highTemperature */
    int8_t *ptr_highTemperature = &highTemperature_f;

    /* Set that ptr temperature is pointing to the value of highTemperature */
    int8_t *ptr_lowTemperature = nullptr;
    ptr_lowTemperature = &lowTemperature_f;


    /* PTR is not pointing anywhere */
    printf("Value of ptr_highTemperature... %x\n", ptr_highTemperature);
    /* Value that it is pointing at */
    printf("Value of *ptr_highTemperature... %d\n", *ptr_highTemperature);
    /* Address wher value is being stored */
    printf("Value of &ptr_highTemperature... %x\n", &ptr_highTemperature);


    /* PTR is not pointing anywhere */
    printf("Value of ptr_lowTemperature... %x\n", ptr_lowTemperature);
    /* Value that it is pointing at */
    printf("Value of *ptr_lowTemperature... %d\n", *ptr_lowTemperature);
    /* Address wher value is being stored */
    printf("Value of &ptr_lowTemperature... %x\n", &ptr_lowTemperature);

    return 0;
}
