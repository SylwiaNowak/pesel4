#include <iostream>
#include <windows.h>

using namespace std;

string sprawdzPesel(string liczba)
{
    int pesel[11];
    int szyfr[11] = {1,3,7,9,1,3,7,9,1,3,1};
    int suma=0;
    string wynik;

    //cin >> liczba;


    for (int i=0; i<11; i++)
    {
        pesel[i] = liczba[i] - 48;
    }
    //for (int i=0; i<11; i++)
    //{
    //cout << pesel[i] << " ";
    //}


    for (int i=0; i<11; i++)
    {
        //cout << endl << "Suma: " << suma << endl;
        //cout << "Pesel: " << pesel[i] << endl;
        //cout << "szyfr: " << szyfr[i] << endl;
        //cout << "Liczba: " << liczba << endl;
        //system("pause"); //do³¹czyæ #include <windows.h>

        suma = suma + (pesel[i] * szyfr[i]);
    }
    //cout << endl << suma << endl;

    if (suma%10 == 0)
    {
        wynik = "D";
    }
    else
    {
        wynik = "N";
    }
    return wynik;
}

int main()
{
    //cout << "ile numerow pesel podasz?" << endl;
    int ile_nr_pesel;
    cin >> ile_nr_pesel;

    string liczba; //string liczba = "44051401458";

    for (int i=0; i<ile_nr_pesel; i++)
    {
        cin >> liczba;
        cout << sprawdzPesel(liczba) << endl;
    }

    return 0;
}
