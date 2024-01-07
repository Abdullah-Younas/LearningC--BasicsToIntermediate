#include <iostream>

int main(){
    int rows;
    int columns;
    char player = '_';
    std::cout << "How many Check?\n";
    std::cout << "How many Rows?\n";
    std::cin >> rows;
    std::cout << "How many Columns?\n";
    std::cin >> columns;
    for (int i = 0; i < rows; i++)
    {
        std::cout << '\n';
        for (int j = 0; j < columns; j++)
        {
            std::cout << player << "|";
            if(i == 24 && j == 24){
                player = '@';
            }else if(j > 24){
                player = '_';
            }
        }
        
    }
    

    return 0;
}