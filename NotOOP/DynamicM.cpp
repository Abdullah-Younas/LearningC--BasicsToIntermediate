#include <iostream>

int main(){

    /*int *pNum = nullptr;

    pNum = new int;

    *pNum = 21;

    std::cout << pNum << '\n';
    std::cout << *pNum;

    delete pNum;*/
    
    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in?: ";
    std::cin >> size;
    pGrades = new char[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "Grades: " << pGrades[i] << '\n';
    }
    
    delete[] pGrades;
    

    return 0;
}