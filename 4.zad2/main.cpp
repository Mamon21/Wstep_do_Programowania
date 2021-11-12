#include <iostream>

using namespace std;

int main()
{
    string imie;
    cout << "Jak masz na imie?" << endl;
    cin>>imie;
    cout<<"\""<<imie<<"\""<<endl;
    cout<<"\"";
    cout.width(20);
    cout<<imie<<"\""<<endl;
    cout<<"\"";
    cout.width(20);
    cout<<left<<imie<<"\""<<endl;
    int dlugosc=imie.length();
    cout<<"\"";
    cout.width(dlugosc+3);
    cout<<imie<<"\""<<endl;

    return 0;
}
