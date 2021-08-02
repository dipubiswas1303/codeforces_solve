#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Jzzhu and Children
LINK : https://codeforces.com/problemset/problem/450/A
************/
int main(){
    int n, candy;
    cin >> n >> candy;
    int a[n];
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x % candy == 0){
            a[i] = x / candy;
        }
        else{
            a[i] = x / candy + 1;
        }
    }
    int m = -2, k = 0;
    for(int i = 0; i < n; ++i){
        if(m <= a[i]){
            m = a[i];
            k = i + 1;
        }
    }
    cout << k << endl;
    return 0;
}
