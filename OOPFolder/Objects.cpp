#include <iostream>

class Car{
    public:
        std::string brand = "Vehicle";
        std::string model = "Model";
        int year;

        void drive(){
            std::cout << "This vehicle is driving\n";
        }
        void Description(){
            std::cout << "This is a " << brand << '\n';
            std::cout << "The model of this vehicle is " << model << '\n';
            std::cout << "It was created in " << year << '\n';
        }
        void Drift(){
            std::cout << "Lets Go!! Its Drifting\n";
        }
};
int main(){
    //Ojbect similar to structs but with Specific methods
    Car PersonalCar;
    PersonalCar.brand = "Lamborghini";
    PersonalCar.model = "Huracan";
    PersonalCar.year = 2014;
    Car WifeCar;
    WifeCar.brand = "Honda";
    WifeCar.model = "city";
    WifeCar.year = 2021;

    PersonalCar.Description();
    PersonalCar.drive();
    PersonalCar.Drift();

    WifeCar.Description();
    WifeCar.drive();
    WifeCar.Drift();

    return 0;
}