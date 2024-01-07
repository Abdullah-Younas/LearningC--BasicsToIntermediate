#include <iostream>

/*void HappyBirthday(std::string username, int userage){
    std::cout << "Happy birthday to You!\n";
    std::cout << "Happy birthday to You!\n";
    std::cout << "Happy birthday Dear " << username << '\n';
    std::cout << "Happy birthday to You!!!!!\n";
    std::cout << "You are " << userage << " years old now\n";
}*/

int Add(int num1,int num2){
    return num1 + num2;
}

int main(){

    //std::string name = "Abdullah";
    //int age = 18;
    //HappyBirthday(name, age);
    int num1 = 3;
    int num2 = 7;
    int Sum = Add(num1,num2);
    std::cout << "The Sum is " << Sum;

    return 0;
}