#include <iostream>

#include "utility.cpp"
using namespace std;
 
// Main() function: where the execution of program begins
int main()
{
    srand(time(NULL));

    printf("Hello World\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%i\n", diceRoll(3));
    }

    return 0;
}