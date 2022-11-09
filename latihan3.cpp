// Nama : Alfeus Martnus
// Kelas : RPL 1A
// NIM : 2204148
#include <iostream>
using namespace std;
int main ()

{
    int kendaraan;
    int paket;
    int paket2;

        cout<<"\t\t\t\t==========================================="<<endl;
        cout<<"\t\t\t\tSELAMAT DATANG DI TEMPAT CUCI MOTOR & MOBIL"<<endl;
        cout<<"\t\t\t\t==========================================="<<endl;
        cout<<"\n\n";
        cout<<"PILIH JENIS KENDARAAN ANDA"<<endl;
        cout<<"[1] MOBIL "<<endl;
        cout<<"[2] MOTOR \n"<<endl;
        cout<<"SILAHKAN MASUKAN ANGKA : ";
        cin>>kendaraan;
        cout<<"KAMU MEMILIH JENIS KENDARAAN NOMOR "<<kendaraan<<endl;
        cout<<endl;
    

        if (kendaraan == 1) 
        {
            cout << "PILIH PAKET ANDA"<<endl;
            cout << "[1] WASH ONLY"<<endl;
            cout << "[2] WASH AND VACUM "<<endl;
            cout << "[3] VACUM ONLY\n "<<endl;
            cout << "SILAHKAN PILIH PAKET ANDA : ";
            cin  >> paket;

            if (paket == 1){
                cout << "Price : IDR 50K";
            }
            else if (paket == 2){
                cout << "Price : IDR 100K";
            }
            else if (paket == 3){
                cout << "Price : IDR 30K";
            } else {
                cout << "WARNING!!! - INPUTAN YANG ADA MASUKAN SALAH";
            }
        } 
        else if (kendaraan == 2) 
        {
            cout << "PILIH PAKET ANDA"<<endl;
            cout << "[1] WASH ONLY"<<endl;
            cout << "[2] WASH AND VACUM "<<endl;
            cout << "[3] VACUM ONLY\n "<<endl;
            cout << "SILAHKAN PILIH PAKET ANDA : ";
            cin  >> paket2;

            if (paket2 == 1){
                cout << "Price : IDR 25K";
            }
            else if (paket2 == 2){
                cout << "Price : IDR 50K";
            }
            else if (paket2 == 3){
                cout << "Price : IDR 15K";
            }
            else {
                cout << "WARNING!!! - INPUTAN YANG ADA MASUKAN SALAH";
            }
        } 
    cin.get();
    return 0;  
}
    