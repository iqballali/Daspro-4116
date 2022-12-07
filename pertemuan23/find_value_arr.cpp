#include <iostream>

using namespace std;

int main()
{
/*
    int c[50];
    for(int i=0; i < 5; i++){
        cin >> c[i];
    }
    for(int i=4; i >= 0;i--){
        cout << c[i] << " ";
    }
    */
    /*
    int a;
    cout << "Masukkan panjang array : ";
    cin >> a;
    float jumlah = 0;
    float rata_rata;
    int c[a];
    for(int i= 1; i <= a; i++){
        cin >> c[i];
    }
    for(int i =1; i<=a; i++){
        jumlah = jumlah + c[i];
    }
    rata_rata = jumlah / a;
    cout <<"Jumlah : " << jumlah << endl;
     cout << "Rata - Rata : " << rata_rata <<endl;
    */
    int a;
    cout << "Masukkan panjang array : ";
    cin >> a;
    int find;
    int angka[a];
        for(int i= 1; i <= a; i++){
        cin >> angka[i];
    }
    cout << "Masukkan angka yang ingin dicari : ";
    cin >> find;
    bool ketemu = false;
    for(int j=1; j <= a; j++){
        if(find == angka[j]){
            cout  << "True"  << endl;
            ketemu = true;
        }
    }
        if(ketemu == false){
            cout << "False" << endl;
        }


}
