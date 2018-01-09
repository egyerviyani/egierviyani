#include<conio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,ba,ka;
int matriksA[10][10];
int matriksB[10][10];
int matriksC[10][10];
cout<<"Masukan Jumlah Baris Matriks A=";
cin>>ba;
cout<<"Masukan Jumlah Kolom Matriks A=";
cin>>ka;
for(i=1;i<=ba;i++)
{
for(j=1;j<=ka;j++)
{
cout<<"A["<<i<<","<<j<<"]=";
cin>>matriksA[i][j];
}
cout<<"\n";
}
cout<<"MatriksA="<<endl;
for(i=1;i<=ba;i++)
{
for(j=1;j<=ka;j++)
{
cout<<matriksA[i][j];
}
cout<<"\n";
}
cout<<"\n";
cout<<"masukan jumlah kolom matriks B=";
cin>>ka;
for(i=1;i<=ba;i++)
{
for(j=1;j<=ka;j++)
{
cout<<"B["<<i<<","<<j<<"]=";
cin>>matriksB[i][j];
}
cout<<"\n";
}
cout<<"Matriks B="<<endl;
for(i=1;i<=ba;i++)
{
for(j=1;j<=ka;j++)
{
cout<<matriksB[i][j];
}
cout<<"\n";
}
cout<<"\n";
clrscr();
cout<<"MatriksA="<<endl;
for(i=1;i<=ba;i++)
{
for(j=1;j<=ka;j++)
{
cout<<matriksA[i][j];
}
cout<<"\n";
}
cout<<"\nMatriks B="<<endl;
for(i=1;i<=ba;i++)
{
for(j=1;j<=ka;j++)
{
cout<<matriksB[i][j];
}
cout<<"\n";
}
cout<<"\nMatriks A + Matriks B="<<endl;
for(i=1;i<=ba;i++)
{
for(j=1;j<=ka;j++)
{
matriksC[i][j]=matriksA[i][j]+matriksB[i][j];
cout<<matriksC[i][j];
}
cout<<"\n";
}
}
