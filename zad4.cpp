#include <iostream>
using namespace std;

string zwroc_wiersz()
{
    return "Panie Janie!";
}

string zwroc_wiersz_2()
{
    return "Rano Wstan!";
}

int main()
{
    for(int i = 0; i<2; i++)
    {
        cout << zwroc_wiersz() << endl;
    }
    cout << zwroc_wiersz_2() << endl;




}

