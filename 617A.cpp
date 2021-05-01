#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 617A
   LINK : https://codeforces.com/problemset/problem/617/A
   */

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

