#include <iostream>
#include <vector>

int main(){
    /*std::vector<int> v1 = {1,2,3};
    //std::cout << v1.front() << '\n';
    //std::cout << v1.back() << '\n';
    v1.push_back(9);//Assign a element at last place
    v1.pop_back();//Pop last element removes
    v1.shrink_to_fit();//Shrinks the capacity
    v1.insert(v1.begin(),5);
    v1.insert(v1.end(),2);
    v1.erase(v1.begin());
    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i];
    }*/
    std::vector<char> Snake = {'~','-','-','-','@'};
    for (int i = 0; i < Snake.size(); i++)
    {
        std::cout << Snake[i];
    }
    std::swap(Snake[0],Snake[Snake.size()-1]);
    std::cout << std::endl;
    for (int i = 0; i < Snake.size(); i++)
    {
        std::cout << Snake[i];
    }
    return 0;
}