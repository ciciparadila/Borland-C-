#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int a,b,c,d;

clrscr();
cout<<"Masukan Nilai A :",cin>>a;
cout<<"Masukan Nilai B :",cin>>b;

c=a/b;
d=a*b;
clrscr();

cout<<"Hasil dari C=A/B adalah"<<c<<ends;
cout<<"Hasil dari D=A*B adalah"<<d<<ends;
getch();
}