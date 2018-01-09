#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
char cust[50],tipe[10],bonus[50],lagi,kode;
int lama,hrg,sewa,cash,tot,kem,adm;
atas:
cout<<" ================PENGINAPAN OKE BANGET==============="<<endl;
cout<<" ********************"<<endl;
cout<<" NAMA PENYEWA\t\t:";gets(cust);
cout<<" Kode Kamar [A/B/N]\t:";cin>>kode;
switch(kode)
{
 case'a':
 case'A':
 strcpy(tipe,"MAWAR");
  hrg=400000;
 break;
 case'b':
 case'B':
   strcpy(tipe,"MELATI");
   hrg=350000;
 break;
 case'm':
 case'M':
    strcpy(tipe,"BUNGA");
    hrg=500000;
 break;
 default:
 cout<<"SALAH MASUKAN KODE"<<endl;
    goto bawah;
 }
cout<<"Lama Menginap\t\t:";cin>>lama;
if(lama>=7)
{
strcpy(bonus,"sepatu");
}
else
strcpy(bonus,"TIDAK DAPAT SOUVENIR");
clrscr();
adm=300000;
sewa=lama*hrg;
tot=adm+sewa;
cout<<" PENGINAPAN PASTI SERU"<<endl;
cout<<" Nama Penyewa\t\t:"<<cust<<endl;
cout<<" Kode Kamar[A\B\M]\t:"<<kode<<endl;
cout<<" Lama Menginap\t\t:"<<lama<<endl;
cout<<"**********************************"<<endl;
cout<<" Tipe Kamar\t\t:"<<tipe<<endl;
cout<<" Lama Menginap\t\t:"<<lama;cout<<"hari"<<endl;
cout<<" souvenir\t\t:"<<bonus<<endl;
cout<<" Biaya Sewa\t\t:"<<sewa<<endl;
cout<<" Biaya Adminstrasi\t"<<adm<<endl;
cout<<" T0tal Biaya Sewa\t:"<<tot<<endl;
cout<<" *********************************"<<endl;
cout<<" uang bayar\t\t:";cin>>cash;
kem=cash-tot;
cout<<" uang kembali\t\t:"<<kem<<endl;
bawah:
cout<<"INGIN INPUT LAGI?[Y/T]";cin>>lagi;
clrscr();
if(lagi=='y'||lagi=='Y')
goto atas;
else
getch();
}
