#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char gol, jab[10];
long gapok=0;

	clrscr();
   cout<<endl<<"Direktur/Manajer"<<endl
   <<"========================"<<endl;
   cout<<"[1/2]:";
   cin>>gol;

//proses seleksi kondisi
if(gol=='1')
{	strcpy(jab,"Direktur");
	gapok=5000000;
  }
else if(gol=='2')
{	strcpy(jab,"Manajer");
	gapok=4000000;
 }
 else
{cout<<"salah kode golongan"<<endl;}

//output datanya
  cout<<"jabatan = "<<jab<<endl;
  cout<<"Gaji Pokok = "<<gapok<<endl;
getch();
}

