#include <iostream>

/*DIPU BISWAS 479A*/

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z, q, w;
    x = a + b + c;
    y = a + b * c;
    z = a * b * c;
    q = (a + b) * c;
    w = a * (b + c);

    if(x > y && x > z && x > q && x > w)
        cout << x;
    else if (y > x && y > z && y > q && y > w)
        cout << y;
    else if (z > x && z > y && z > q && z > w)
        cout << z;
    else if (q > x && q > z && q > y && q > w)
        cout << q;
    else
        cout << w;
    return 0;
}



