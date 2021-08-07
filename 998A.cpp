#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 	998A - Balloons
LINK : https://codeforces.com/problemset/problem/998/A
************/
int main()
{
    int t, m = INT_MAX, ind, sum = 0;
    cin >> t;
    for(int i = 0; i < t; ++i){
        int x;
        cin >> x;
        sum += x;
        if(x < m){
            m = x;
            ind = i + 1;
        }

    }
    if(sum - m == m || t == 1){
        cout << -1 << endl;
    }else{
        cout << 1 << endl << ind << endl;
    }
    return 0;
}

