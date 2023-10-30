#include <iostream>

using namespace std;

int main()
{
    int8_t highTemperature_f = 100;
    int8_t lowTemperature_f = 4;

    /* Null ptr to set to addr 0 */
    int8_t *ptr_temperature = nullptr;

    ptr_temperature = &highTemperature_f;

    /* PTR is not pointing anywhere */
    printf("Value of ptr_temperature... %x\n", ptr_temperature);
    /* Value that it is pointing at */
    printf("Value of *ptr_temperature... %d\n", *ptr_temperature);
    /* Address wher value is being stored */
    printf("Value of &ptr_temperature... %x\n", &ptr_temperature);

    return 0;
}
