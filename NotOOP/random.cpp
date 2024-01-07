#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int eventNum = rand() % 5 + 1;

    switch (eventNum)
    {
        case 1: std::cout << "You Won a Teddy Bear";
            break;
        case 2: std::cout << "You Won a Plane";
            break;
        case 3: std::cout << "You Won a friendship band";
            break;
        case 4: std::cout << "You Won a Drink";
            break;
        case 5: std::cout << "You Won some Popcorn";
            break;

        default:
            break;
    }


    return 0;
}