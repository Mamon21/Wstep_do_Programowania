#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float liczba;

    cout << "Podaj liczbe " << endl;
    cin>>liczba;

    cout<<showpoint<<setprecision(8)<<"Podana liczba to "<<liczba<<" lub ";
    cout.setf(ios::scientific);
    cout<<setprecision(6)<<liczba;
    return 0;
}
