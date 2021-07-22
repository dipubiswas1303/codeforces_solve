#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Football
LINK : https://codeforces.com/problemset/problem/43/A
************/
int main(){
    int t, c1 = 1, c2 = 0;
    cin >> t;
    t--;
    string a, b, c;
    cin >> a;
    while(t--){
        cin >> b;
        if(a == b){
            c1++;
        }
        else{
            c2++;
            c = b;
        }
    }
    if(c1 > c2)
        cout << a << endl;
    else
        cout << c << endl;
    return 0;
}
