#include <bits/stdc++.h>

using namespace std;
/*******************
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 32B
LINK : https://codeforces.com/problemset/problem/32/B
*******************/

int main()
{
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '.'){
            cout << 0;
        }
        else if(a[i] == '-'){
            if(a[i + 1] == '-'){
                i++;
                cout << 2;
            }
            else{
                cout << 1;
                i++;
            }
        }
    }
    return 0;
}

