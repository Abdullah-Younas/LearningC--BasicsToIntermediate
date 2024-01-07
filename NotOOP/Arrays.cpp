#include <iostream>

double getTotal(double prices[], int size){
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}
int main(){

    /*std::string names[] = {"sponge","patrick","squidward"};

    for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++)
    {
        std::cout << names[i] << '\n';
    }
    for(std::string name : names){
        std::cout << name << '\n';
    }*/

    double prices[] = {35.3,24.4,25,30};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    
    std::cout << "$" << total;

    return 0;
}