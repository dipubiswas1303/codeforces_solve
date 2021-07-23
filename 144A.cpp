#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Arrival of the General
LINK : https://codeforces.com/problemset/problem/144/A
************/

int main(){
    int t, p = 0, Max = -1, Min = 101, max_posi = 0, min_posi = 0;
    cin >> t;
    while(t--){
        p++;
        int x;
        cin >> x;
        if(Max < x){
            Max = x;
            max_posi = p;
        }
        if(Min >= x){
            Min = x;
            min_posi = p;
        }
    }
    int ans  = 0;
    if(max_posi > min_posi){
        ans = max_posi - 1 + p - min_posi - 1;
    }
    else{
        ans = max_posi - 1 + p - min_posi;
    }
    cout << ans << endl;
    return 0;
}
