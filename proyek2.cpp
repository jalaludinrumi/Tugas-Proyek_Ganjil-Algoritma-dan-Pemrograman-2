#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;
 
struct gaji{
	char nama[30];
	int jkerja;
	int jlembur;
	float gaji;
	float gapok;
	float glembur;
	float gajibersih;
	int gol;	
};
	gaji kry[50];
	
int main()
{
   int  jum;
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jum;
   cout<<endl;
	
   for (int a=0;a<jum;a++){
    cout<<"KARYAWAN KE-"<<a+1<<endl;
	cout<<"Masukan Nama              : "; cin>>kry[a].nama;		//menginput nama karyawan
	cout<<"Masukan Golongan          : "; cin>>kry[a].gol;		//menginput golongan karyawan
	cout<<"Masukan Jumlah Jam Kerja  : "; cin>>kry[a].jkerja;	//menginput jumlah jam kerja karyawan
	
	switch (kry[a].gol){	//switch case untuk menentukan golongan
		case 1 : 					//jika golongan 1 maka gaji pokok karyawan = 3000
			kry[a].gapok=3000;
			break;
		case 2 :					//jika golongan 2 maka gaji pokok karyawan = 3500
			kry[a].gapok=3500;
			break;
		case 3 :
			kry[a].gapok=4000;		//jika golongan 3 maka gaji pokok karyawan = 4000
			break;
		case 4 :
			kry[a].gapok=5000;		//jika golongan 4 maka gaji pokok karyawan = 5000
			break;
		default :					
			kry[a].gapok=0;			//bentuk default
	}
	
	if (kry[a].jkerja>40){					//percabangan if jika jam kerja karyawan lebih dari 40 jam maka dihitung lembur
	    kry[a].jlembur=kry[a].jkerja-40;	//jam lebur = jam kerja - 40 
	}
	else{	//jika tidak lebih dari 40 jam maka
	    kry[a].jlembur=0; //jam lembur = 0
	}
	kry[a].gaji=kry[a].jkerja*kry[a].gapok;	//gaji = jam kerja * gaji pokok
	kry[a].glembur=kry[a].jlembur*(kry[a].gapok*3/2); //gaji lembur = jam lembur * (gaji pokok * 3/2)
	kry[a].gajibersih=kry[a].gaji+kry[a].glembur;	//gaji bersih = gaji + gaji lembur
	cout<<endl;
	}
	
	system("cls"); //menghapus sumua tampilan
	
	cout<<endl;
	for (int a=0;a<jum;a++){	//looping
			
		cout<<"     KARYAWAN KE-"<<a+1<<endl;
		cout<<"Nama                 : "<<kry[a].nama<<endl; //menampilkan nama
		cout<<"Gaji Pokok           : "<<kry[a].gapok<<" Per jam"<<endl; //menampilkan gaji pokok
		cout<<"Gaji Lembur          : "<<kry[a].glembur<<endl;	//menampilkan gaji lembur
		cout<<"Gaji Diterima        : "<<kry[a].gajibersih<<endl; //menampilkan gaji diterima
		cout<<endl<<endl;	
	}
	
	int i,k,pil;
	bool found;
	cout<<"Kategori Nilai yang ingin dicari = \n1. Gaji Pokok\n2. Gaji Lembur\n3. Gaji Diterima"<<endl; //kategori nilai yang ingin dicari 
	cout<<"Masukkan Kategori Nilai yang ingin dicari = "; cin>>pil; //menginput kategori nilai yang ingin dicari
	switch(pil){ //percabangan switch case
	case 1 : //jika kategori nilai yang ingin dicari = 1 atau yang dicari = gaji pokok
	i=0;
	cout<<"Masukkan Nilai yang ingin dicari : ";
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (kry[i].gapok==k) //percabangan if jika nilai gaji pokok = nilai yang dicari makan found = true
    found=true;
    else //jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){ //jika found maka program dibawah dikerjakan
	for(int a=0;a<jum;a++){ //looping
	cout<<"Nama                 : "<<kry[a].nama<<endl; //menampilkan nama
	cout<<"Gaji Pokok           : "<<kry[a].gapok<<" Per jam"<<endl; //menampilkan gaji pokok		
	}}
	else //jika tidak program dibawah dikerjakan
	cout<<"nilai "<<k<<"tidak ada dalam data gaji pokok";
	break;
	case 2 : //jika kategori nilai yang ingin dicari = 2 atau yang dicari = gaji lembur
	i=0;
	cout<<"Masukkan Nilai yg ingin dicari : ";
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (kry[i].glembur==k) //percabangan if jika nilai gaji lembur = nilai yang dicari makan found = true
    found=true;
    else //jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){ //jika found maka program dibawah dikerjakan
	for(int a=0;a<jum;a++){ //looping
	cout<<"Nama                 : "<<kry[a].nama<<endl;		//menampilkan nama
	cout<<"Gaji Lembur          : "<<kry[a].glembur<<endl; //menampilkan gaji lembur
	}
	}
	else //jika tidak program dibawah dikerjakan
	cout<<"nilai "<<k<<"tidak ada dalam data gaji lembur";
	break;
	case 3 : //jika kategori nilai yang ingin dicari = 3 atau yang dicari = gaji diterima
	i=0;
	cout<<"\nMasukkan Nilai yang Ingin Dicari : "; 
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (kry[i].gajibersih==k) //percabangan if jika nilai gaji bersih = nilai yang dicari makan found = true
    found=true;
    else //jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){ //jika found maka program dibawah dikerjakan
	for(int a=0;a<jum;a++){ //looping
	cout<<"Nama                 : "<<kry[a].nama<<endl; 	//menampilkan nama
	cout<<"Gaji Diterima        : "<<kry[a].gajibersih<<endl; //menampilkan gaji diterima
	}}
	else //jika tidak program dibawah dikerjakan
	cout<<"nilai "<<k<<"tidak ada dalam data";
	break;
}
}


