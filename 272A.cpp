#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 272A - Dima and Friends
LINK : https://codeforces.com/problemset/problem/272/A
************/
int main() {
    int n, sum = 0, c = 0;
    cin >> n;
    int y = n;
    while(n--){
        int x;
        cin >> x;
        sum += x;
    }
    for(int i = 1; i < 6; ++i){
        if((sum + i) % (y + 1) != 1){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
