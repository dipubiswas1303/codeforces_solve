#include <iostream>
#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 1328A
   LINK : https://codeforces.com/problemset/problem/1328/A
   */

int main()
{
    unsigned long long int t;
    cin >> t;
    while(t--)
    {
        unsigned long long int a, b, c = 0;
        cin >> a >> b;
        if(a % b != 0)
        {
            c = b * (a / b + 1) - a;
            cout << c << endl;
        }
        else
            cout << c << endl;
    }
  return 0;
}
