#include <iostream>

using namespace std;

int main(){
    // int bilangan;
    // cout << "Masukkan bilangan : "<<endl;
    // cin >> bilangan;
    // if (bilangan % 2 == 0)
    // {
    //     cout << "Bilangan yang anda masukkan adalah bilangan Genap"<<endl;
    // }else{
    //     cout << "Bilangan yang anda masukkan adalah bilangan Ganjil" << endl;
    // }
    
    // int bilangan = 24;
    // if (bilangan % 2 == 0 && bilangan > 20)
    // {
    //     cout << "Bilangan yang anda masukkaan adalah bilangan genap dan lebih dari 20"<<endl;
    // }
    
    int bilangan;

    cout << "Masukkan Bilangan :"<<endl;
    cin >> bilangan;

    if (bilangan % 2 == 0 && bilangan > 20 && bilangan < 50)
    {
        cout << "Bilangan yang anda masukkan adalah bilangan genap lebih dari 20 dan kurang dari 50"<<endl;

    }else if(bilangan % 2 == 1 && bilangan < 15){
        cout << "Bilangan yang anda masukkan adalah bilangan ganjil kurang dari 15"<<endl;
    }else{
        cout<< "Angka yang anda masukkan tidak bilangan genap > 20 && kurang dari 50 || Bilangan ganjil < 15 "<<endl;
    }
    
}