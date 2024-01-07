#include <iostream>
#include <ctime>

bool InGame = false;
char UserChoice;
int ComputerChoice;
void GameWinner(){
    switch (UserChoice)
    {
        case 'R':
        case 'r':
            if (ComputerChoice == 2 || ComputerChoice == 4 || ComputerChoice == 6 || ComputerChoice == 8 || ComputerChoice == 10)
            {
                std::cout << "Computer Wins the match";
                InGame = false;
            }else if(ComputerChoice == 1 || ComputerChoice == 9){
                std::cout << "Match is Draw";
                InGame = false;
            }else{
                std::cout << "User Wins the match";
                InGame = false;
            }
            break;
            
        case 'P':
        case 'p':
            if (ComputerChoice == 1 || ComputerChoice == 9)
            {
                std::cout << "User Wins the match";
                InGame = false;
            }else if(ComputerChoice == 2 || ComputerChoice == 4 || ComputerChoice == 6 || ComputerChoice == 8 || ComputerChoice == 10){
                std::cout << "Match is Draw";
                InGame = false;
            }else{
                std::cout << "Computer Wins the match";
                InGame = false;
            }
            break;
            
        case 'S':
        case 's':
            if (ComputerChoice == 2 || ComputerChoice == 4 || ComputerChoice == 6 || ComputerChoice == 8 || ComputerChoice == 10)
            {
                std::cout << "User Wins the match";
                InGame = false;
            }else if(ComputerChoice == 3 || ComputerChoice == 5 || ComputerChoice == 7){
                std::cout << "Match is Draw";
                InGame = false;
            }else{
                std::cout << "Computer Wins the match";
                InGame = false;
            }
            break;
        
        default:
            break;
    }
}
void ComputerChoiceSelected(){
    srand(time(NULL));
    ComputerChoice = rand() % 10 + 1;
    switch (ComputerChoice)
    {
        case 1:
        case 9:
            std::cout << "Computer Choice is Rock\n";
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            std::cout << "Computer Choice is Paper\n";
            break;
        case 3:
        case 5:
        case 7:
            std::cout << "Computer Choice is Scissor\n";
            break;
    
        default:
            break;
    }
}
void StartGame(){
    std::cout << "The game is Started!!";
    do
    {
        
        std::cout << "What is your choice(R Rock P Paper S Scissor Q QuitGame): ";
        std::cin >> UserChoice;

        switch (UserChoice)
        {
            case 'R':
            case 'r':
                std::cout << "User Choice is Rock\n";
                ComputerChoiceSelected();
                GameWinner();
                break;
            
            case 'P':
            case 'p':
                std::cout << "User Choice is Paper\n";
                ComputerChoiceSelected();
                GameWinner();
                break;
            
            case 'S':
            case 's':
                std::cout << "User Choice is Scissor\n";
                ComputerChoiceSelected();
                GameWinner();
                break;

            case 'Q':
            case 'q':
                InGame = false;
                break;
        
            default:
                break;
        }
    } while (InGame);
    
}

int main(){

    char gamestart;

    std::cout << "---------------Rock Paper Scissor---------------\n";
    std::cout << "Welcome User!! ";
    std::cout << "Press P/p to start game: ";
    std::cin >> gamestart;


    switch (gamestart)
    {
    case 'P':
    case 'p':
        InGame = true;
        StartGame();
        break;
    
    default:
        break;
    }

    return 0;
}