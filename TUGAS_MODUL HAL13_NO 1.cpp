# include <iostream>
# include <conio.h>
using namespace std;

main (void) {
    
    float angka [100], total = 0 , rata, Rata;
    int jumlah;
    
    cout<<" 1. Mencari Rata-rata"<<endl;
    cout<<endl;
    cout<<" Masukkan Data Angka : " ; cin>> jumlah;
    cout<< endl;
    
    for (int i=1 ; i<=jumlah; i++) {
        cout<<" Masukkan angka ke - "<<i<<": " ; cin >> angka[i];
        total = total + angka[i];
    }
    
    cout<<endl;
    cout<<" Total: " << total << endl;
    rata=total/jumlah;
    cout<<" Rata-rata: " << rata;
    getch ();
}
