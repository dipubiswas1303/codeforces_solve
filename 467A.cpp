#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 467A
   LINK : https://codeforces.com/problemset/problem/467/A
   */

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

