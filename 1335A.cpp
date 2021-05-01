#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 1335A
   LINK : https://codeforces.com/problemset/problem/1335/A
   */

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n < 3)
            cout << 0 << endl;
        else if( n % 2 == 0)
            cout << n / 2 - 1 << endl;
        else
            cout << n / 2 << endl;
    }

    return 0;
}

