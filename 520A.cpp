#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 520A
   LINK : https://codeforces.com/problemset/problem/520/A
   */

int main()
{
    int t, c, i = 0, j = 0, x = 0;
    cin >> t;
    string a;
    cin >> a;

    for(i = 0; i < t; i++){
        c = 0;
        for(j = i + 1; j < t; j++){
            if(toupper(a[i]) == toupper(a[j]))
                c = 1;
        }
        if(c == 0)
            x++;
    }
    if(x >= 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

