#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<setprecision(1000);
    int ilelitr;
    float czasteczka=3*0.00000000000000000000001;
    long double litr=1000/czasteczka;
    long double wynik;
    cout << "Podaj objetosc wody w litrach" << endl;
    cin>>ilelitr;
    wynik=ilelitr*litr;
    cout<<ilelitr<<" litrow wody to "<<wynik<<" czasteczek wody";
    return 0;
}
