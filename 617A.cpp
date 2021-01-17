#include <iostream>

using namespace std;

int main()
{
    int t, x = 0;
    cin >> t;
    if(t % 5 == 0)
        x = t / 5;
    else if( t < 5)
            x = 1;
    else
        x = t / 5 + 1;
    cout << x;

    return 0;
}

