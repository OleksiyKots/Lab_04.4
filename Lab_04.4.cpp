#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double xp, xk, dx, R1, R2, x, y;

    cout << " R1= "; cin >> R1;
    cout << " R2= "; cin >> R2;
    cout << " xp=  "; cin >> xp;
    cout << " xk=  "; cin >> xk;
    cout << " dx= "; cin >> dx;


    cout << "+------------+------------+" << endl;
    cout << "| x          | y          |" << endl;
    cout << "+------------+------------+" << endl;


    for (x = xp; x <= xk; x += dx) {
        if (x < - 6)
            y =  R2 / 2;
        else 
            if (-6 <= x && x < 4)
                y = (-x * R1 - 6 * R1) / (-2 * R2 + 6) + R1;
            else 
                if (4 <= x && x < 0)
                    y = sqrt(R2 * R2 - pow((x + R2), 2));
                else 
                    if (0 <= x && x < 2 * R1)
                        y = -sqrt(R1 * R1 - pow((x - R1), 2));
                    else
                       y = (x - 2 * R1 * (-R1)) / ((2 * R1 + 1) - 2 * R1);


        cout << fixed << setprecision(2);
        cout << "| " << setw(10) << x << "| " << setw(10) << y << "|" << endl;
    }
    cout << "+------------+------------+" << endl;

    return 0;
}
