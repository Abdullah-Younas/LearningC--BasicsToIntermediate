#include <iostream>
using namespace std;
/*Passing
//We should use & before function values to make them pass by reference(original value)
//And the original value of variable is changed
void SwapValues(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
}
*/
/*Const
//We should use const keyword before function values to make them unchangeable for more secure need
void printInfo(const string &name,const int &age){
    If we do this and the func var are not const they would change
    less secure code
    name = "   ";
    age = 123;
    std::cout << name << '\n';
    std::cout << age << '\n';
}
*/
int main(){

    /*string x = "Kool-aid";
    string y = "Water";

    std::cout << x << '\n';
    std::cout << y << '\n';

    SwapValues(x,y);

    std::cout << "Swapped: " << x << '\n';
    std::cout << "Swapped: " << y << '\n';*/

    /*string name = "abdullah";
    int age = 18;
    printInfo(name,age);*/
    return 0;
}