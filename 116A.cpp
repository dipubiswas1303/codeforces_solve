
#include <iostream>

using namespace std;

int main()
{
    int t, a, b, k = 0, x = 0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
            k = k - a + b;
            if(x < k)
                x = k;
            else
                x = x;
    }
    cout << x;

    return 0;
}
