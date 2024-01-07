#include <iostream>
#include <cmath>

int main(){
    double angleWhole = 360.0;
    int radius = 100;
    int Npoints = 17;
    double Xcoor[Npoints];
    double Ycoor[Npoints];

    for (int i = 0; i < Npoints; i++) {
        double angleN = (angleWhole / Npoints) * i;
        Xcoor[i] = round(sin(angleN * M_PI / 180.0) * radius);
        Ycoor[i] = round(cos(angleN * M_PI / 180.0) * radius);
        std::cout << Xcoor[i] << "," << Ycoor[i] << '\n';
    }

    return 0;
}