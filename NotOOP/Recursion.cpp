#include <iostream>

int Factorial(int num);
int main(){

    /*//Walking
    int steps = 5;
    Walk(steps);*/

    std::cout << "Result: " << Factorial(3);

    return 0;
}
/*void Walk(int numofSteps){
    for (int i = 0; i < numofSteps; i++) Iterative approach
    {
        std::cout << "You took a Step!\n";
    }
    if (numofSteps > 0) Recursive to approach easier but takes more memory
    {
        std::cout << "You took a Step!\n";
        Walk(numofSteps - 1);
    }
}*/
/*int Factorial(int num){
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
    if (num > 1)
    {
        return num * Factorial(num-1);
    }else{
        return 1;
    }
    
}*/