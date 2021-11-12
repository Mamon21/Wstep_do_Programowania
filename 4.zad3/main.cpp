#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float liczba;
    cout << "Podaj liczbe" << endl;
    cin>>liczba;
    cout<<endl<<"Wpisano liczbe "<<setprecision(3)<<liczba<<" lub ";
    cout.setf(ios::scientific);
    cout<<setprecision(1)<<liczba;
    cout.unsetf(ios::scientific);
    cout<<endl<<"Wpisano liczbe +"<<showpoint<<setprecision(5)<<liczba<<" lub ";
    cout.setf(ios::scientific);
    cout<<setprecision(3)<<liczba;

    return 0;
}
