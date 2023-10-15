
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0; // liczby do pobrania.
    int maks = 0; // zalozenie do maksymalnej wartosci liczby
    
    cout << "a = "; // wpisywanie liczb cout i cin 
    cin >> a;
    maks = a;

    cout << "b = ";
    cin >> b;
    
    if (b > maks)//porowanie liczby z poprzednia
    {
        maks = b; // jezeli jest wieksza to podaj nastepna
        cout << "c = ";
        cin >> c;

        if (c > maks)
        {
            maks = c;
            cout << "d = ";
            cin >> d;

            if (d > maks)
            {
                maks = d;
                cout << "e = ";
                cin >> e;

                if (e > maks)
                {
                    maks = e;
                    cout << "Koniec" << endl; // koniec 
                }
                else
                {
                    cout << "za mala liczba" << endl; // komunikat jezeli liczba jest za mala

            }
            else
            {
                cout << "za mala liczba" << endl;
            }
        }
        else
        {
            cout << "za mala liczba" << endl;
        }
    }
    else
    {
        cout << "za mala liczba" << endl;
    }

    return 0;

}


