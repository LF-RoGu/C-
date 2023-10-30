#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int8_t testScores_u8 [5] = {100, 95, 99, 87, 88};
    int8_t highScorePerPlayer_u8 [10] = {3,5};
    const int16_t daysInYear_u16 = 365;
    int16_t  temperatures [daysInYear_u16] = {0};

    printf("This is an example on how to initialize and use arrays \n");

    /* Sufix '_v' for vector type */
    vector <int> vowels_v {'a', 'e', 'i', 'o', 'u'};
    printf("Vector at position %d\n"
           "Letter in position... %c", 0, vowels_v.at(0));

    return 0;
}
