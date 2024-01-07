#include <iostream>

class Stove{
    private:
        int temp = 10;
    public:

    int getTemp(){
        return temp;
    }
    void setTemp(int temp){
        if (temp < 0){
            this->temp = 0;
        }
        else if(temp >= 10){
            this->temp = 10;
        }else{
            this->temp = temp;
        }
    }
};
int main(){
    Stove stove1;
    //stove1.temp = 100000; cant access since private
    stove1.setTemp(6);
    std::cout << "the temp is " << stove1.getTemp();
    return 0;
}