#include <iostream>



using namespace std;

int main()
{
float a,b;

cout<<"Podaj wartosc  A = :";

cin>>a;

cout<<"Podaj wartosc B = :";
cin>>b;
if (a == 0 && b==0)
cout<<"Rownanie tozsamosciowe"<<endl;

else if (a == 0 && b!=0)
cout<<"rownanie sprzeczne"<<endl;

else
{
float x;
x = -b/a;
cout<<"x = "<<x;
}



return 0;
}

