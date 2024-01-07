#include <iostream>
template <typename T, typename U> //Include this when FuncTemp

/*int max(int x,int y){ Overloaded Funcs All do samething
    return (x > y) ? x : y;
}
double max(double x,double y){
    return (x > y) ? x : y;
}
char max(char x,char y){
    return (x > y) ? x : y;
}*/
/*T max(T x, T y){ Simple function that works with a variable types
    return (x > y) ? x : y;
}*/
auto max(T x, U y){
    return//////;
}
int main(){

    //std::cout << "Int Max: " << max(3,4);
    //std::cout << "Float Max: " << max(2.9999,3);
    std::cout << "Char Max: " << max(5,5);
    


    return 0;
}