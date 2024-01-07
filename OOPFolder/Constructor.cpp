#include <iostream>

class Student{
    public: 
        std::string name;
        int age;
        double gpa;
        void Description(){
            std::cout << "This is a Student " << name << '\n';
            std::cout << "His/Her age is " << age << '\n';
            std::cout << "He/She has a GPA of " << gpa << '\n';
        }
    Student(std::string name,int age,double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};
int main(){

    Student student1("Abdullah",18,3.6);
    student1.Description();
    return 0;
}