#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 977A
   LINK : https://codeforces.com/problemset/problem/977/A
   */

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

