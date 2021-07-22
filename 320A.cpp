#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Magic Numbers
LINK : https://codeforces.com/problemset/problem/320/A
************/

int main(){
    string a;
    cin >> a;
    int x = a.size(), y = 0;
    for(int i = a.size() - 1; i >= 0; --i){
        if(a[i] == '4' && a[i - 1] == '4' && a[i - 2] == '1'){
            i -= 2;
            y += 3;
            continue;
        }
        else if(a[i] == '4' && a[i - 1] == '1'){
            --i;
            y += 2;
            continue;
        }
        else if(a[i] == '1'){
            y++;
        }
    }
    if(x == y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
