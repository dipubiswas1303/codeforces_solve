#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x = 0, i = 0;
    cin >> a >> b >> c;
    for(i = 1; i <= c; i++)
    {
        x = x + a * i;
    }
    if((x - b) < 0)
        cout << 0;
    else
        cout << x - b;
    return 0;
}

