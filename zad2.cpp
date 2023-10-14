#include <iostream>
using namespace std;

int main()
{
    float a = 0, b = 0;
    float x = 0;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "nieskonczenie wiele rozwiazan." << endl;
        }
        else
        {
            cout << "brak" << endl;
        }
    }
    else
    {
        x = -b / a;
        cout << "x = " << x << endl;
    }

    return 0;
}