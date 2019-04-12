#include <iostream>
using namespace::std;

struct tampil{
double total;
};
tampil grade;

double input (string text){
    double angka;
    cout<<"Input Nilai "<<text<<" : ";cin>>angka;
    return angka;
    }

double rumus(double uts,double uas,double tugas,double absen){
    double total;
    grade.total=(uts*20/100)+(uas*30/100)+(tugas*35/100)+(absen*15/100);
    cout<<"Hasil Nilai : "<<grade.total<<endl;
    return grade.total;
}

void huruf (double total){
    if(grade.total>81)
        {cout<<"A";}
    else if(grade.total>61)
        {cout<<"B";}
    else if(grade.total>41)
        {cout<<"C";}
    else if(grade.total>21)
        {cout<<"D";}
    else if(grade.total>0)
        {cout<<"E";}
    }

main (){
    double uts,uas,tugas,absen,rata,total;
    uts=input ("UTS");
    uas=input ("UAS");
    tugas=input ("TUGAS");
    absen=input ("ABSEN");
    total=rumus(uts,uas,tugas,absen);
    huruf(total);
}
