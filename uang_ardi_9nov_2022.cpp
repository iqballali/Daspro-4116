#include <iostream>

using namespace std;

int main()
{
    int uang, harga_permen, jumlah_permen, sisa_uang;
    cout << "Masukkan Uang Ardi Rp: ";
    cin >> uang;
    cout << "Berapa harga permen yang ingin dibeli ardi Rp : ";
    cin >> harga_permen;
    if(harga_permen == 1000){
        jumlah_permen = 3;
        sisa_uang = uang - (jumlah_permen * harga_permen);
        cout << "Ardi Membeli : " << jumlah_permen << " Permen" <<endl;
        cout << "Dan sisa uangnya sekarang adalah Rp " << sisa_uang << endl;
    }else if(harga_permen == 500){
        jumlah_permen = uang / harga_permen;
        sisa_uang = uang % harga_permen;
        cout << "Ardi Membeli : " << jumlah_permen << " Permen" <<endl;
        cout << "Dan sisa uangnya sekarang adalah Rp " << sisa_uang << endl;
    }else if(harga_permen == 300){
        for(int i = 300; i<=uang; i=i+300){
            cout << i <<" ";
        }
        jumlah_permen = uang / 300;
        sisa_uang = uang - (jumlah_permen * harga_permen);
        cout << endl;
        cout << "Ardi Membeli : " << jumlah_permen << " Permen" <<endl;
        cout << "Dan sisa uangnya sekarang adalah Rp " << sisa_uang;
    }else{
        jumlah_permen = uang / harga_permen;
        sisa_uang = sisa_uang = uang - (jumlah_permen * harga_permen);
            cout << "Ardi Membeli : " << jumlah_permen << " Permen" <<endl;
        cout << "Dan sisa uangnya sekarang adalah Rp: " << sisa_uang;
    }

}