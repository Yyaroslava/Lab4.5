#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

int main()
{
    double a, b, R, x, y; // вхідні параметри

    srand((unsigned)time(NULL));

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "R = "; cin >> R;
    double temp = (a, b);
    double second = (temp, R);
    double first = -second;

    for (int i = 0; i <= 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y <= 0 && x >= -a && x <= 0 && y >= -b && x * x + y * y <= R * R ||
            y <= b && y >= 0 && x >= 0 && x <= a && x * x + y * y >= R * R))
            cout << setw(8) << setprecision(3) << x << "  " << setw(8) << setprecision(3) << y << "  " << "yes" << endl;
        else
            cout << setw(8) << setprecision(3) << x << "  " << setw(8) << setprecision(3) << y << "  " << "no" << endl;
    }

    cout << endl << fixed;
    for (int i = 0; i <= 10; i++)
    {
        x = (second - first) * rand() / RAND_MAX + first;
        y = (second - first) * rand() / RAND_MAX + first;
        if ((y <= 0 && x >= -a && x <= 0 && y >= -b && x * x + y * y <= R * R ||
            y <= b && y >= 0 && x >= 0 && x <= a && x * x + y * y >= R * R))
            cout << setw(8) << setprecision(3) << x << "  " << setw(8) << setprecision(3) << y << "  " << "yes" << endl;
        else
            cout << setw(8) << setprecision(3) << x << "  " << setw(8) << setprecision(3) << y << "  " << "no" << endl;
    }

    return 0;
}