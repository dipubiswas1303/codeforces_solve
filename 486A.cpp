#include <iostream>
#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 486A
   LINK : https://codeforces.com/problemset/problem/486/A
   */

int main()
{
    long long int a, n = 0, m = 0;
    cin >> a;
    if(a % 2 == 0){
        n = a / 2;
        cout << (n * (n + 1) - n * n);
    }
    else
    {
        n = a / 2;
        m = n + 1;
        cout << (n * (n + 1) - m * m);
    }
    return 0;
}
