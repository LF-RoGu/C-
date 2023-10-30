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

    /*
     * Vectors ar dynamic arrays
     * Can be used as a normal array or using the syntax specific for vectors
     */
    /* Sufix '_v' for vector type */
    vector <int> vowels_v {'a', 'e', 'i', 'o', 'u'};
    printf("Vector at position %d\n"
           "Letter in position... %c \n", 0, vowels_v.at(0));

    /*
     * Here we create a Vector of Vectors of Intigers of 8 bits
     */
    vector <vector<int8_t>> biDimentionalVector_v =
            {
                    {12, 45, 68, 3},
                    {13, 69, 56},
                    {12 ,45, 66, 122, 108}
            };
    /* Since paramter returns ulong, we change the paratemer for print to be ulong */

    for(int8_t i = 0; i < biDimentionalVector_v.size(); i++)
    {
        printf("-------------------- \n");
        printf("Vector size %zu \n", biDimentionalVector_v.at(i).size());
        for(int8_t j = 0; j < biDimentionalVector_v.at(i).size(); j++)
        {
            printf("Vector value %ul \n", biDimentionalVector_v.at(i).at(j));
        }
    }
    return 0;
}
