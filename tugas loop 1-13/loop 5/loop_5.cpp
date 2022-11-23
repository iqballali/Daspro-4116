#include <iostream>

using namespace std;

int main()
{
    cout << "Program ini akan berhenti jika anda memasukkan angka -99" << endl;
    int angka;
    while(true){
        cout << "Masukkan Nilai Anda : ";
        cin >> angka;
        if(angka == -99){
            cout << endl;
            cout << "Program Keluar Karena Anda Memasukkan Angka -99" << endl;
            break;
        }
    }
}