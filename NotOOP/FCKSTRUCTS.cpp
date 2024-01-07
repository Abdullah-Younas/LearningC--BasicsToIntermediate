#include <iostream>
//STRUCTS Easy kinda array objects
struct student
{
    std::string Sname;
    double Sgpa;
    bool Senrolled = true;
};
void PrintSdata(student &student){
    std::cout << student.Sname << '\n';
    std::cout << student.Sgpa << '\n';
    std::cout << student.Senrolled << '\n';
}
int main(){

    student student1;
    student1.Sname = "Abdullah";
    student1.Sgpa = 3.6;
    student1.Senrolled = true;
    student student2;
    student2.Sname = "Johnny";
    student2.Sgpa = 3.6;
    student2.Senrolled = false;
    PrintSdata(student1);
    std::cout << '\n';
    PrintSdata(student2);
    /*std::cout << student1.Sname << '\n';
    std::cout << student1.Sgpa << '\n';
    std::cout << student1.Senrolled << '\n';
    std::cout << student2.Sname << '\n';
    std::cout << student2.Sgpa << '\n';
    std::cout << student2.Senrolled << '\n';*/

    return 0;
}