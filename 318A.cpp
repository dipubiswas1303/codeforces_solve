#include <iostream>
#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 318A
   LINK : https://codeforces.com/problemset/problem/318/A
   */

int main()
{
    unsigned long long int a, b;
    cin >> a >> b;
    if(a % 2 == 0)
    {
        if(a / 2 >= b){
            cout << 2 * b - 1;
        }
        else
        {
            cout << 2*(b - a / 2);
        }
    }
    else
    {
        if(a / 2 + 1 >= b){
            cout << 2 * b - 1;
        }
        else
        {
            cout << 2*(b - a / 2 - 1);
        }
    }

    return 0;
}

