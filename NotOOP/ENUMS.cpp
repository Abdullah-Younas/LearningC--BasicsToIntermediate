#include <iostream>

//A user defined data type 
//USEFUL For set of potential options
enum Days {
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
    sunday = 7
};

int main(){

    Days today = sunday;

    switch (today)
    {
        case 1:
            std::cout << "It is Monday!\n";
            break;
        case 2:
            std::cout << "It is tuesday!\n";
            break;
        case 3:
            std::cout << "It is wednesday!\n";
            break;
        case 4:
            std::cout << "It is thursday!\n";
            break;
        case 5:
            std::cout << "It is friday!\n";
            break;
        case 6:
            std::cout << "It is saturday!\n";
            break;
        case 7:
            std::cout << "It is sunday!\n";
            break;
    
        default:
            break;
    }

    return 0;
}