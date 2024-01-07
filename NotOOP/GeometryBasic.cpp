#include <iostream>

int main(){

    int row;
    int column;
    std::cout << "how many rows: ";
    std::cin >> row;
    std::cout << "how many columns: ";
    std::cin >> column;
    

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            std::cout << "-";
        }
        std::cout << "-" << '\n';
    }

    return 0;
}