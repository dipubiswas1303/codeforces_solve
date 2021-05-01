#include <iostream>
#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 443A
   LINK : https://codeforces.com/problemset/problem/443/A
   */

int main()
{
    int i, j, c = 0, k = 0;
    string a, b;
    getline(cin , a);
    for(i = a.size() - 1; i >= 0; i--)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
            b.push_back(a[i]);
    }
    for(i = 0; i < b.size(); i++){
            c = 0;
        for(j = i + 1; j < b.size(); j++){
            if(b[i] == b[j])
                c = 1;
        }
        if(c == 0)
            k++;
    }
    cout << k ;
    return 0;
}

