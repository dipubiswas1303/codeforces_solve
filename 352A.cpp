#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Jeff and Digits
LINK : https://codeforces.com/contest/352/problem/A
************/

int main(){
    int t, zero = 0, five = 0, d = 0;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x == 0)
            zero++;
        else
            five++;
    }
    if(zero == 0){
        cout << -1;
    }
    else if(five == 0){
        cout << 0;
    }
    else if(five % 9 == 0){
        while(five--){
            cout << 5 ;
        }
        while(zero--){
            cout << 0;
        }
    }else{
        d = five / 9;
        if(d == 0){
            cout << 0;
        }
        else{
            d = d * 9;
            while(d--){
                cout << 5;
            }
            while(zero--){
                cout << 0;
            }
        }
    }
    cout << endl;
    return 0;
}

