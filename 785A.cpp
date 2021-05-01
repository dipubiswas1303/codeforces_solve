#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 785A
   LINK : https://codeforces.com/problemset/problem/785/A
   */

int main()
{
    int t, sum = 0;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        if(a[0] == 'T')
            sum = sum + 4;
        else if(a[0] == 'C')
            sum = sum + 6;
        else if(a[0] == 'O')
            sum = sum + 8;
        else if(a[0] == 'D')
            sum = sum + 12;
        else
            sum = sum + 20;
    }
    cout << sum;

    return 0;
}

