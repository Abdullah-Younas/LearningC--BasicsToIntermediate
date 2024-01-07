#include <iostream>
#include <fstream>
using namespace std;

class Weapon{
    private:
        string Wname = "Weapon";
        int MagSize = 30;
        int NofMags = 3;
        double RateOfFire = 1;
    public:

    string GetName(){
        return Wname;
    }
    int GetMS(){
        return MagSize;
    }
    int GetNM(){
        return NofMags;
    }
    double GetROF(){
        return RateOfFire;
    }
    void setWname(string Wname){
        this->Wname = Wname;
    }
    void setMagSize(int MagSize){
        if (MagSize <= 0){
            this->MagSize = 1;
        }else if(MagSize >= 50){
            this->MagSize = 50;
        }else{
            this->MagSize = MagSize;
        }
    }
    void setNofMags(int NofMags){
        if (NofMags <= 0){
            this->NofMags = 1;
        }else if(NofMags >= 15){
            this->NofMags = 15;
        }else{
            this->NofMags = NofMags;
        }
    }
    void setRateOfFire(double RateOfFire){
        if (RateOfFire <= 0){
            this->RateOfFire = 1.5;
        }else if(RateOfFire >= 5){
            this->RateOfFire = 5;
        }else{
            this->RateOfFire = RateOfFire;
        }
    }
};
int main(){
    string Wname;
    int MagSize;
    int NofMags;
    double ROF;
    cout << "Create Your Weapon: \n";
    cout << "Type your Weapons Name: ";
    cin >> Wname;
    cout << "Type The Size of Mag you Want 0<MagSize>50: ";
    cin >> MagSize;
    cout << "Type the Number of Mags you Want 0<NofMags>15: ";
    cin >> NofMags;
    cout << "Type the Speed at which you want to Weapons to fire 0<ROF>5: ";
    cin >> ROF;
    Weapon W1;
    W1.setWname(Wname);
    W1.setMagSize(MagSize);
    W1.setNofMags(NofMags);
    W1.setRateOfFire(ROF);

    cout << "Weapon Name: " << W1.GetName() << '\n';
    cout << "Mag Size: " << W1.GetMS() << '\n';
    cout << "No of Mags: " << W1.GetNM() << '\n';
    cout << "Rate of Fire: " << W1.GetROF() << '\n';

    ofstream file("Weapons.txt");
    file << "Weapons: \n";
    file << Wname << '\n';
    file << MagSize << '\n';
    file << NofMags << '\n';
    file << ROF << '\n';
    file.close();

    return 0;
}