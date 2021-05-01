#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 116A
   LINK : https://codeforces.com/problemset/problem/116/A
   */

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
