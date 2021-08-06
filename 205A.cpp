#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Little Elephant and Rozdils
LINK : https://codeforces.com/problemset/problem/205/A
************/
int main()
{
    long long t, m = INT_MAX, k = 0, pos = 0;
    cin >> t;
    long long ar[t];
    for(int i = 0; i < t; ++i){
        cin >> ar[i];
        if(ar[i] <= m){
            if(m == ar[i]){
                k = 1;
            }else{
                k = 0;
            }
            m = ar[i];
            pos = i;
        }
    }
    if(k == 0){
        cout << pos + 1 << endl;
    }
    else{
        cout << "Still Rozdil" << endl;
    }

    return 0;
}
