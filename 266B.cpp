#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : B. Queue at the School
LINK : https://codeforces.com/problemset/problem/266/B
************/

int main(){
    int x, y;
    cin >> x >> y;
    string a;
    cin >> a;
    while(y--){
        int z = 0;
        while(z < x){
            if(a[z] == 'B' && a[z + 1] == 'G'){
                swap(a[z], a[z + 1]);
                z++;
            }
        z++;
        }
    }
    cout << a << endl;
    return 0;
}

