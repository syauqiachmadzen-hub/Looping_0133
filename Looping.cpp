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
