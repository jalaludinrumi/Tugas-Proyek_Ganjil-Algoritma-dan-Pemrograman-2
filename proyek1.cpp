#Include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
 
struct nilai{
	long long int stambuk;
    char nama[30];
	float uas;
    float uts;
    float tproyek;
    float tugasm;
    float kehadiran;
    float NA;
};
	nilai mhs[50];
	
int main()
{
	int jmhs;
	cout<<"Jumlah Mahasiswa : "; cin>>jmhs;							//menginput jumlah mahasiswa
	for(int a=0;a<jmhs;a++){										//looping
	cout<<"Mahasiswa "<<(a+1)<<endl;
	cout<<"Nama                       = "; cin>>mhs[a].nama;		//menginput nama mahasiswa
	cout<<"Stambuk                    = "; cin>>mhs[a].stambuk;		//menginput stambuk
	cout<<"Nilai UTS                  = "; cin>>mhs[a].uts;			//menginput nilai uts
	cout<<"Nilai UAS                  = "; cin>>mhs[a].uas;			//menginput nilai uas
	cout<<"Nilai Tugas Mandiri        = "; cin>>mhs[a].tugasm;		//menginput nilai tugas mandiri
	cout<<"Nilai Tugas Proyek         = "; cin>>mhs[a].tproyek;		//menginput nilai tugas proyek
	cout<<"Nilai Kehadiran            = "; cin>>mhs[a].kehadiran;	//menginput nilai kehadiran
 
	cout<<"\n";
	}
	cout<<"\n";
   
	system("cls");		//mengapus semua tampilan screen
	
    for(int a=0;a<jmhs;a++)	//looping
    {
    	mhs[a].uts = mhs[a].uts*20/100;					//nilai uts = nilai uts dikali dengan 20%
		mhs[a].uas = mhs[a].uas*25/100;					//nilai uas = nilai uas dikali dengan 25%
		mhs[a].tugasm = mhs[a].tugasm*20/100;			//nilai tugas mandiri = nilai tugas mandiri dikali dengan 20%
		mhs[a].tproyek = mhs[a].tproyek*20/100;			//nilai tugas proyek = nilai tugas proyek dikali dengan 20%
		mhs[a].kehadiran = mhs[a].kehadiran*15/100;		//kehadiran = nilai kehadiran dikali dengan 15%
		mhs[a].NA = mhs[a].tugasm+mhs[a].tproyek+mhs[a].uts+mhs[a].uas+mhs[a].kehadiran;	//nilai akhir = tugas mandiri+ tugas proyek+uts+uas+kehadian
		cout<<"Mahasiswa "<<(a+1)<<endl;
        cout<<"Nama                      = "<<mhs[a].nama<<endl;		//menampilkan nama	
        cout<<"Stambuk                   = "<<mhs[a].stambuk<<endl;		//menampilkan stambuk
		cout<<"Nilai UTS * 20%           = "<<mhs[a].uts<<endl;			//menampilkan nilai uts yang sudah dikali 20%
		cout<<"Nilai UAS * 25%           = "<<mhs[a].uas<<endl;			//menampilkan nilai uas yang sudah dikali 25%
		cout<<"Nilai Tugas Mandiri * 20% = "<<mhs[a].tugasm<<endl;		//menampilkan nilai tugas mandiri yang sudah dikali 20%
		cout<<"Nilai Tugas Proyek * 20%  = "<<mhs[a].tproyek<<endl;		//menampilkan nilai tugas proyek yang sudah dikali 20%
		cout<<"Kehadiran * 15%           = "<<mhs[a].kehadiran<<endl;	//menampilkan nilai kehadiran yang sudah dikali 25%
    	cout<<"Nilai Akhir               = "<<mhs[a].NA<<endl;			//menampilan nilai akhir
    	if(mhs[a].NA>85)		//percabangan if jika nilai akhir lebih besar dari 85 maka grade = A
    	{
    		cout<<"Grade = A";
		}
		else if(mhs[a].NA<=85 && mhs[a].NA>=81)	//jika nilai akhir lebih kecil atau sama dengan 85 dan lebih besar atau sama dengan 81
		{
		cout<<"Grade = A-"; //maka grade = A-
		}
		else if (mhs[a].NA<=80 && mhs[a].NA>=76) //jika nilai akhir lebih kecil atau sama dengan 80 dan lebih besar atau sama dengan 76
		{
		cout<<"Grade = B+"; //maka grade = B+
		}
		else if (mhs[a].NA<=75 && mhs[a].NA>=71) //jika nilai akhir lebih kecil atau sama dengan 75 dan lebih besar atau sama dengan 71
		{
		cout<<"Grade = B"; //maka grade = B
		}
		else if (mhs[a].NA<=70 && mhs[a].NA>=66) //jika nilai akhir lebih kecil atau sama dengan 70 dan lebih besar atau sama dengan 66
		{
		cout<<"Grade = B-"; //maka grade = B-
		}
		else if (mhs[a].NA<=65 && mhs[a].NA>=61) //jika nilai akhir lebih kecil atau sama dengan 65 dan lebih besar atau sama dengan 61
		{
		cout<<"Grade = C+"; //maka grade = C+
		}
		else if (mhs[a].NA<=60 && mhs[a].NA>=51) //jika nilai akhir lebih kecil atau sama dengan 60 dan lebih besar atau sama dengan 51
		{
		cout<<"Grade = C";	//maka grade = C
		}
		else if (mhs[a].NA<=50 && mhs[a].NA>=45) //jika nilai akhir lebih kecil atau sama dengan 50 dan lebih besar atau sama dengan 45
		{
		cout<<"Grade = D"; //maka grade = D
		}
		else	//jika tidak ada yang benar maka grade = E
		{
		cout<<"Grade = E";
		}
		cout<<"\n"<<endl;
	}
	int i,k,pil;
	bool found;
	cout<<"Kategori Nilai yang ingin dicari = \n1. UTS\n2. UAS\n3. Tugas Mandiri\n4. Tugas Proyek\n5. Kehadiran"<<endl;
	cout<<"Masukkan Kategori Nilai yang ingin dicari = "; cin>>pil;	//menginput ktegori nilai yang ingin dicari
	switch(pil){	//percabangan switch case
	case 1 : //jika ketegori nilai yang dicari = 1 atau yang dicari = UTS
	i=0;
	cout<<"Masukkan Nilai yang ingin dicari : ";
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (mhs[i].uts==k)	//percabangan if jika nilai uts = nilai yang dicari makan found = true
    found=true;
    else	//jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){	//jika found maka program dibawah dikerjakan
	for(int a=0;a<jmhs;a++){	//perulanagan
	cout<<"Nama                      = "<<mhs[a].nama<<endl;	//menampilkan nama
	cout<<"Stambuk                   = "<<mhs[a].stambuk<<endl;	//menampilkan stambuk
	cout<<"Nilai UTS * 20%           = "<<mhs[a].uts<<endl<<endl; //menampilkan nilai uts yang sudah dikali 20%
	}}
	else	//jika tidak program dibawah dikerjakan
	cout<<"nilai "<<k<<"tidak ada dalam data uts";
	break;
	case 2 : //jika ketegori nilai yang dicari = 2 atau yang dicari = UAS
	i=0;
	cout<<"Masukkan Nilai yg ingin dicari : ";
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (mhs[i].uas==k) //percabangan if jika nilai uas = nilai yang dicari makan found = true
    found=true;
    else //jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){ //jika found maka program dibawah dikerjakan
	for(int a=0;a<jmhs;a++){
	cout<<"Nama                      = "<<mhs[a].nama<<endl; //menampilkan nama
	cout<<"Stambuk                   = "<<mhs[a].stambuk<<endl; //menampilkan stambuk
	cout<<"Nilai UAS * 20%           = "<<mhs[a].uas<<endl<<endl; //menampilkan nilai uas yang sudah dikali 25%
	}}
	else //jika tidak program dibawah dikerjakan
	cout<<"nilai "<<k<<"tidak ada dalam data uas";
	break;
	case 3 : //jika ketegori nilai yang dicari = 3 atau yang dicari = tugas mandiri
	i=0;
	cout<<"\nMasukkan Nilai yang Ingin Dicari : ";
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (mhs[i].tugasm==k) //percabangan if jika nilai tugas mandiri = nilai yang dicari makan found = true
    found=true;
    else //jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){ //jika found maka program dibawah dikerjakan
	for(int a=0;a<jmhs;a++){
	cout<<"Nama                      = "<<mhs[a].nama<<endl; //menampilkan nama
	cout<<"Stambuk                   = "<<mhs[a].stambuk<<endl; //menampilkan stambuk
	cout<<"Nilai Tugas Mandiri * 20% = "<<mhs[a].tugasm<<endl<<endl; //menampilkan nilai tugas mandiri yang sudah dikali 20%
	}}
	else //jika tidak program dibawah dikerjakan
	cout<<"nilai "<<k<<" tidak ada dalam data tugas mandiri";
	break;
	case 4 : //jika ketegori nilai yang dicari = 4 atau yang dicari = tugas proyek
	i=0;
	cout<<"\nMasukkan Nilai yang Ingin Dicari : "; 
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (mhs[i].tproyek==k) //percabangan if jika nilai tugas proyek = nilai yang dicari makan found = true
    found=true;
    else //jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){ //jika found maka program dibawah dikerjakan
	for(int a=0;a<jmhs;a++){
	cout<<"Nama                      = "<<mhs[a].nama<<endl; //menampilkan nama
	cout<<"Stambuk                   = "<<mhs[a].stambuk<<endl; //menampilkan stambuk
	cout<<"Nilai Tugas Proyek * 20%  = "<<mhs[a].tproyek<<endl<<endl; //menampilkan nilai tugas proyek yang sudah dikali 20%
	}
	}
	else //jika tidak program dibawah dikerjakan
	cout<<"nilai "<<k<<"tidak ada dalam data tugas proyek";
	break;
	case 5 : //jika ketegori nilai yang dicari = 5 atau yang dicari = kehadiran
	i=0;
	cout<<"\nMasukkan Nilai yang Ingin Dicari : "; 
	while ((i<10)&(!found))
	{
	cin>>k; //meninput nilai yang ingin dicari
    if (mhs[i].kehadiran==k) //percabangan if jika nilai kehadiran = nilai yang dicari makan found = true
    found=true;
    else //jika tidak maka kerjakan i = i+1
    i=i+1;
	}
	if(found){ //jika found maka program dibawah dikerjakan
	for(int a=0;a<jmhs;a++){
	cout<<"Nama                      = "<<mhs[a].nama<<endl; //menampilkan nama
	cout<<"Stambuk                   = "<<mhs[a].stambuk<<endl; //menampilkan stambuk
	cout<<"Kehadiran * 15%           = "<<mhs[a].kehadiran<<endl<<endl; //menampilkan nilai kehadiran yang sudah dikali 15%
	}
	}
	else //jika tidak program dibawah dikerjakan
	cout<<"nim "<<k<<"tidak ada dalam data";
	break;
}
 
}

