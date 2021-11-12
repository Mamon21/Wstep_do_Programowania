#include <iostream>

using namespace std;

int main()
{
    string imie;
    float wzrost;
    cout << "Jak masz na imie? " << endl;
    cin>>imie;
    cout<< "Podaj wzrost w cm "<< endl;
    cin>>wzrost;
    cout<<imie<<", masz "<<wzrost/100<<" metra wzrostu.";


    return 0;
}
