#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 546A
   LINK : https://codeforces.com/problemset/problem/546/A
   */

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

