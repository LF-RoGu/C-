#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> varExamples_str = {"Word1", "Word2", "Word3"};

    /*
     * So, when you write "for(auto str: variable)", it's like saying,
     * "I want to go through all the things in the bag named 'variable,'
     * and for each thing, I'm going to call it 'str' and play with it
     * one by one."
     */
    for(auto str: varExamples_str)
    {
        cout << str << endl;
    }
    /*
     * Here we are changing the name of the toys to all of them being "Potato"
     */
    for(auto &str: varExamples_str)
    {
        str = "Potato";
    }
    for(auto str: varExamples_str)
    {
        cout << str << endl;
    }

    return 0;
}
