// Zad3
//

#include <iostream>
#include <cmath> //uzywam biblioteki cmath 
using namespace std;

int main()
{
    float a = 0, b = 0, c = 0; //pobieram zmienne float bo nie musi byc to liczba calkowita

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    double delta = (b * b - 4 * a * c); // delta zamiast potegi dalem b*b

    if (delta == 0) // dobieram dzialania zalezne od wyniku 
    {
        cout << "x = " << -b / (2 * a) << endl; 
    }

    if (delta < 0)
    {
        cout << "Brak rozwiązań" << endl; 
    }

    if (delta > 0)
    {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);// sqrt pierwistek 
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0; 
}