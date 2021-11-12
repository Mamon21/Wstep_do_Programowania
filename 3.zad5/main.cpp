#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float wiek, wynik;
    cout<<setprecision(15);
    cout << "Ile masz lat? " << endl;
    cin>>wiek;
    wynik=wiek*3.156*10000000;
    cout<<"Jest to "<<wynik<<" sekund";
    return 0;
}
