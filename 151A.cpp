#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Soft Drinking
LINK : https://codeforces.com/problemset/problem/151/A
************/

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ans = 0;
    int A, B, C;
    A = (k * l) / nl;
    B = c * d;
    C = p / np;
    ans = min(A, min(B, C)) / n;
    cout << ans << endl;
    return 0;
}


