#include <iostream>
#include <ctime>

std::string UserPassword;
int UserMethodChoice;
int User1Balance = 9860;
int User2Balance = 5450;
int UserDepositedMoney;
int UserWithdrawnMoney;

void CheckBalance(std::string UserPassword){
    if(UserPassword == "123456789"){
        std::cout << "Account Balance: $" << User1Balance;
    }else if(UserPassword == "987654321"){
        std::cout << "Account Balance: $" << User2Balance;
    }
}
void DepositMoney(std::string UserPassword, int UserDepositedMoney, int User1Balance, int User2Balance){
    if(UserPassword == "123456789"){
        std::cout << "Enter the Amount You Want To Deposit: ";
        std::cin >> UserDepositedMoney;
        std::cout << "You have Deposited $" << UserDepositedMoney << " Your Total Balance is Now $" << UserDepositedMoney + User1Balance;
    }else if(UserPassword == "987654321"){
        std::cout << "Enter the Amount You Want To Deposit: ";
        std::cin >> UserDepositedMoney;
        std::cout << "You have Deposited $" << UserDepositedMoney << " Your Total Balance is Now $" << UserDepositedMoney + User2Balance;
    }
}
void WithDrawMoney(std::string UserPassword, int UserWithdrawnMoney, int User1Balance, int User2Balance){
    if(UserPassword == "123456789"){
        std::cout << "Enter the Amount You Want To Withdraw: ";
        std::cin >> UserWithdrawnMoney;
        std::cout << "You have Withdrawn $" << UserWithdrawnMoney << " Your Total Balance is Now $" << User1Balance - UserWithdrawnMoney;
    }else if(UserPassword == "987654321"){
        std::cout << "Enter the Amount You Want To Withdraw: ";
        std::cin >> UserWithdrawnMoney;
        std::cout << "You have Withdrawn $" << UserWithdrawnMoney << " Your Total Balance is Now $" << User2Balance - UserWithdrawnMoney;
    }
}

int main(){


    std::cout << "-----------------------Your-Personal-ATM-----------------------\n";
    std::cout << "Log in to your bank account with your password(123456789,987654321): ";
    std::cin >> UserPassword;
    if(UserPassword == "123456789" || UserPassword == "987654321"){
        std::cout << "Welcome User\n";
        std::cout << "1. Check account Balance\n";
        std::cout << "2. Deposit Money into account\n";
        std::cout << "3. Withdraw Money From account\n";
        std::cout << "Choose the Number Before any method to do the Following: \n";
        std::cin >> UserMethodChoice;
        switch (UserMethodChoice)
        {
            case 1:
                CheckBalance(UserPassword);
                break;
            case 2:
                DepositMoney(UserPassword,UserDepositedMoney,User1Balance,User2Balance);
                break;
            case 3:
                WithDrawMoney(UserPassword,UserWithdrawnMoney,User1Balance,User2Balance);
                break;
            default:
                break;
        }
    }
    else{
        std::cout << "There is No account Associated with that Password";
    }

    return 0;
}