#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    while(y--)
    {
        if(x % 10 == 0)
            x = x/10;
        else
            x = x - 1;
    }
    cout << x;

    return 0;
}

