#include <iostream>

using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(b - a >= 2)
            c++;
    }
    cout << c;
    return 0;
}

