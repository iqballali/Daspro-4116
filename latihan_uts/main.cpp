#include <stdio.h>
#include <iostream>

using namespace std;


int main(){

    // Mencari Faktorial
    // int hasil = 1;
    // int bilangan;
    // cout << "Masukkan Bilangan : ";
    // cin >> bilangan;
    // for (int i = 1; i <= bilangan; i++)
    // {
    //     hasil = hasil * i;
    //     cout << i;
    //     if (i != bilangan)
    //     {
    //         cout << " * ";
    //     }
    // }
    // cout<< " = " << hasil;
    
    //KPK
    // int hasil,bilangan1,bilangan2;
    // cout << "Masukkan Bilangan 1 : ";
    // cin >> bilangan1;
    // cout << "Masukkan Bilangan 2 : ";
    // cin >> bilangan2;
    // hasil = bilangan1;
    // while (hasil % bilangan2 != 0) /*While akan diulang sampai kondisi memenuhi baru keluar*/
    // {
    //     hasil = hasil + bilangan1;
    // }
    // cout << endl;
    // cout << hasil;
    
    int hasil,bilangan1,bilangan2;
    cout << "Masukkan Bilangan 1 : ";
    cin >> bilangan1;
    cout << "Masukkan Bilangan 2 : ";
    cin >> bilangan2;
    hasil = bilangan1 % bilangan2;
    while (hasil !=0)
    {
        bilangan1 = bilangan2;
        bilangan2 = hasil;
        hasil = bilangan1 % bilangan2;
    }
    cout << "FPB dari kedua bilangan tersebut adalah : " << bilangan2;
    

}