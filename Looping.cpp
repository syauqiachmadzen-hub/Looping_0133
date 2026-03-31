#include <iostream>
#includer <ctime>
using namespace std;

int main(){
    int x;

    //perulangan dengan for
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka acak yang berbeda
    srand(time(0));
    
    //perulangan dengan WHILE
    cout<<"PERULANGAAN WHILE"<<endl;
    x = 1 + rand()%10;

    while (x<=5){
        cout<<"bilangan acak = " <<x <<endl;
        x =  = 1 + rand()%10;
        
        while(x<=5){
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }
    
    cout<<"bilangan acak while yang terakhir ="<<x <<endl;
    cout<<endl;

    //perulangan dengan DO....WHILE 
    cout <<"PERULANGAN DO...WHILE"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"bilangan acak = "<<x <<endl;
        x = rand()%10;
    }while(x<=5);

    cout<<"bilangan acak do-while yang terakhir ="<<x <,endl;
    cout<<endl;
}
logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"masukkan nilai matematika = ";
    cin>>nilM;
    cout<<"masukkan nilai bahasa inggris ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;
    if (!(rerata < 60) )
        status = "lulus";
    else
        status = "tidak lulus";
    
    cout<<"status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}
 logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rersata;
    string status;

    cout<<"masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"masukkan nilai Bahasa Inggris = ";
    cin>>nilB;
    
    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "lulus";
    else
        status = "tidak lulus";
    
        cout<<"status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;

}
logika and
#include <iostream>
using namespace std;
int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "lulus";
    else
        status = "tidak lulus";
    cout<<"status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;    
}

#includ <iostream>
using namespace std;

// Deklarasi Variable global
int kode jurusan;
string namaJurusan;
string statuskuota;
// prosedure input 
void input() {
    cout << "===PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" <<endl;
    cout << "3. Sistem Informasi" <<endl;
    cout << ":-------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodejurusan;
}

// prosedur uuntuk pengecekan kondisi
void pilihanjurusan() {
    switch (kodejurusan) {
        case 1:
            namajurusan = "Teknoloogi Informasi";
            statuskuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namajurusan = "Teknik Elektro";
            statuskuota = "kuota penuh";
            break;
        case 3:
            namajurusan = "Tidak Diketahui";
            statuskuota = "Tersedia (5 kursi)";
            break;
        default:
            namajurusan = "tidak Diketahiui";
            statuskuota = "error: kode Tidak valid";        
    }
}

// prosedu
void output() {
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "status  Kuota   : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}