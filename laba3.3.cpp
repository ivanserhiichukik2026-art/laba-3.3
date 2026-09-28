#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    double x;
    double R;
    double y;

    cout << "R = ";
    cin >> R;

    cout << "x = ";
    cin >> x;

    if (x <= -6)
        y = R;
    else 
        if (-6 < x && x <= -R)
            y = (x + R) / (6 - R);
        else 
            if (-R < x && x <= 0)
                y = R - sqrt(pow(R, 2) - pow(x + R, 2));
            else 
                if (0 < x && x <= R)
                    y = sqrt(pow(R, 2) - pow(x, 2));
                else 
                    if (x > R)
                        y = R - x;

    cout << "y = " << y << endl;

    return 0;
}