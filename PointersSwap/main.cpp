#include <iostream>

using namespace std;

void swap_values(int *ptr1, int *ptr2);

int main() {
    int Var1 = 100, Var2 = 200;

    puts("----------------------------");
    printf("Values Var1: %d Var2: %d \n", Var1, Var2);
    swap_values(&Var1, &Var2);
    printf("Values Var1: %d Var2: %d \n", Var1, Var2);


    return 0;
}

void swap_values(int *ptr1, int *ptr2)
{
    int varTemp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = varTemp;
}