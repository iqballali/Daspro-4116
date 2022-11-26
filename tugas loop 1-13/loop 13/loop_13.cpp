#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "-------------------------------------------------------------" << endl;
    cout << "Celcius          Fahrenheit        Keterangan             " << endl;
    cout << "-------------------------------------------------------------" << endl;
    double celcius;
    double fahrenheit;
    for(celcius = -40; celcius <= 100; celcius++){
        fahrenheit = celcius * 9/5 + 32;
        if(celcius == -40){
            cout << celcius << "                " << fahrenheit << "        " << " Cuaca sangat dingin bersalju" << endl;
        }else if(celcius == -18){
            cout << celcius << "                " << fahrenheit << "       " << " Cuaca dingin bersalju" << endl;
        }else if(celcius == 0){
            cout << celcius << "                  " << fahrenheit << "         " << " Titik Beku Air" << endl;
        }else if(celcius == 10){
            cout << celcius << "                 " << fahrenheit << "         " << " Hari yang dingin" << endl;
        }else if(celcius == 21){
            cout << celcius << "                 " << fahrenheit << "       " << " Temperatur ruangan" << endl;
        }else if(celcius == 30){
            cout << celcius << "                 " << fahrenheit << "         " << " Cuaca Pantai" << endl;
        }else if(celcius == 37){
            cout << celcius << "                 " << fahrenheit << "       " << " Temperatur Tubuh" << endl;
        }else if(celcius == 40){
            cout << celcius << "                 " << fahrenheit << "        " << " Air Mandi Panas" << endl;
        }else if(celcius == 100){
            cout << celcius << "                " << fahrenheit << "        " << " Air Mendidih" << endl;
        }

    }
    cout << "-------------------------------------------------------------" << endl;
}
