#include <iostream>
#include <string>

int main(){

    char grades[] = {'a','b','c','d'};


    for (int i = 0; i < sizeof(grades)/sizeof(char); i++)
    {
        srand(time(NULL));
        i = rand() % sizeof(grades) + 1;
        std::cout << i;
    }

    return 0;
}