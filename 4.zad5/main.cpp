#include <iostream>

using namespace std;


int main()
{
    string imie, nazwisko;
    int dlugosci, dlugoscn;
    cout << "Jak masz na imie? " << endl;
    cin>>imie;
    cout<<"Jak masz na nazwisko? "<<endl;
    cin>>nazwisko;
    dlugosci=imie.length();
    dlugoscn=nazwisko.length();
    cout<<imie<<" "<<nazwisko<<endl;
    for (int i=dlugosci-1; i>0; i--)
    {
        cout<<" ";
    }
    cout<<dlugosci<<" ";
    for (int i=dlugoscn-1; i>0; i--)
    {
        cout<<" ";
    }
    cout<<dlugoscn;

    cout<<endl<<endl;
    cout<<imie<<" "<<nazwisko<<endl;
    cout<<dlugosci;
    for (int i=dlugosci; i>0; i--)
    {
        cout<<" ";
    }
    cout<<dlugoscn;
    return 0;
    }
