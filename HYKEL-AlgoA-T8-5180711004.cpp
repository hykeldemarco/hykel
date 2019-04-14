#include <iostream>
using namespace::std;
double input (string N){
double ipk;
cout<<"Masukan Nilai "<<N<<" : ";cin>>ipk;
return ipk;}

void grade (double ipk)
 {
        if (ipk>=81) {cout<<"\tA";}
        else if (ipk>=61) {cout<<"\tB";}
        else if (ipk>=41) {cout<<"\tC";}
        else if (ipk>=21) {cout<<"\tD";}
        else {cout<<"\tE";}
}

main () {
    struct mahasiswa {
    double tugas, hadir, uts, uas, ipk, ip;
    };
    mahasiswa mhs;

    cout<<"Menghitung Nilai IPK";
    cout<<"\nMasukan Nilai Tugas      :";cin>>mhs.tugas;
    cout<<"\nMasukan Nilai kehadiran  :";cin>>mhs.hadir;
    cout<<"\nMasukan Nilai UTS        :";cin>>mhs.uts;
    cout<<"\nMasukan Nilai UAS        :";cin>>mhs.uas;
    mhs.ip=35*mhs.tugas/100+15*mhs.hadir/100+20*mhs.uts/100+30*mhs.uas/100;
    mhs.ipk=mhs.ip;
    cout<<"\nIPK Anda Adalah : "<<mhs.ipk;
   grade (mhs.ipk);
}



