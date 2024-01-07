#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    
    int GuessNum = rand() % 100 + 1;
    int UserNum;
    int Guesses = 0;

    std::cout << "--------------------------Guess The Number--------------------------" << '\n';

    do
    {
        std::cout << "Guess a number btw 1-100: ";
        std::cin >> UserNum;

        if(UserNum > GuessNum){
            std::cout << "The Guess is higher than Number" << '\n';
            Guesses++;
        }else if(UserNum < GuessNum){
            std::cout << "The Guess is lower than Number" << '\n';
            Guesses++;
        }
        else{
            std::cout << "You Won the Game🎉🎉🎉" << '\n';
            std::cout << "It Took You " << Guesses << " Guesses";
        }
    } while (UserNum != GuessNum);
    

    return 0;
}