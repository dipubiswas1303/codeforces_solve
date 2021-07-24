#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Perfect Permutation
LINK : https://codeforces.com/problemset/problem/233/A
************/

int main(){
    int x;
    cin >> x;
    if(x % 2 == 1){
        cout << -1 << endl;
    }else{
        int i = 1;
        while(i < x){
            cout << i + 1 << " " << i << " ";
            i += 2;
        }
    }
    cout << endl;
    return 0;
}
