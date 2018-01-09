#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
main()
{
char nama[20],nim[20];
float na,nt,np,nab,nat,nap,tn;
cout<<"===================DATA NILAI MAHASISWA=============="<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"-------------------SILAHKAN MASUKAN DATA ANDA--------"<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"	Nim Mahasiswa		: ";gets(nim);
cout<<"	Nama Mahasiswa 	: ";gets(nama);
cout<<" "<<endl;
cout<<"	Nama Absen			: ";cin>>na;
cout<<"	Nilai Tugas 		: ";cin>>nt;
cout<<"	Nilai Project		: ";cin>>np;
nab=na*0.2;
nat=nt*0.3;
nap=np*0.5;
tn=nab+nat+nap; // RC
	clrscr();
cout<<endl;
cout<<"=================DATA NILAI MAHASISWA=============="<<endl;
cout<<"---------------------------------------------------"<<endl;
cout<<"						----==SELESAI==----					 "<<endl;
cout<<"---------------------------------------------------"<<endl;

cout<<"		Nim Mahasisa			"<<nim<<endl;
cout<<"		Nama Mahasiswa			"<<nim<<endl;
cout<<" "<<endl;
cout<<"		Nilai Absen		x 20%    : "<<nab<<endl;
cout<<"		Nilai Tugas		x 30%    : "<<nat<<endl;
cout<<"		Nilai Project	x 50%		: "<<nap<<endl;
cout<<"		------------------------------"<<endl;
cout<<"		Total Nilai				   : "<<tn<<endl;
getch();
}
