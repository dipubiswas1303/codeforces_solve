#include <iostream>
#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 228A
   LINK : https://codeforces.com/problemset/problem/228/A
   */

int main()
{
    int a[4], i = 0, j = 0, c = 0;
    for(i = 0; i < 4; i++)
        cin >> a[i];
    if(a[0] == a[1] || a[0] == a[2] || a[0] == a[3])
        c++;
    if(a[1] == a[2] || a[1] == a[3])
        c++;
    if(a[2] == a[3])
        c++;
    cout << c;

    return 0;
}

