#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14 * (radius * radius);
        this->volume = (4/3.0) * 3.14 * (radius * radius * radius);
    }
};
int main(){
  
    Cube bob(10);
    Sphere John(5);
    std::cout << "Bob Area: " << bob.area << "cm\n";
    std::cout << "Bob Volume: " << bob.volume << "cm\n";
    std::cout << "John Area: " << John.area << "cm\n";
    std::cout << "John Volume: " << John.volume << "cm\n";
    return 0;
}