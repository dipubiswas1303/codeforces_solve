#include <bits/stdc++.h>

using namespace std;
/*******************
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Array
LINK : https://codeforces.com/problemset/problem/300/A
*******************/
int main()
{
    int n;
    cin >> n;
    vector<int> v1, v2, v3;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x > 0){
            v2.push_back(x);
        }else if(x < 0){
            v1.push_back(x);
        }else{
            v3.push_back(x);
        }
    }
    int a = v1.size(), b = v2.size(), c = v3.size();
    if(b == 0){
        v2.push_back(v1[a - 1]);
        v2.push_back(v1[a - 2]);
        a -= 2;
        b += 2;
    }
    if(a % 2 == 1){
        cout << a << " ";
        for(int i = 0; i < a; ++i){
            cout << v1[i] << " ";
        }
        cout << endl << b << " ";
        for(int i = 0; i < b; ++i){
            cout << v2[i] << " ";
        }
        cout << endl << c << " ";
        for(int i = 0; i < c; ++i){
            cout << v3[i] << " ";
        }
    }
    else if(a % 2 == 0){
            cout << a - 1 << " ";
            for(int i = 0; i < a - 1; ++i){
                cout << v1[i] << " ";
            }
            v3.push_back(v1[a - 1]);
            cout << endl << b << " ";
            for(int i = 0; i < b; ++i){
                cout << v2[i] << " ";
            }
            cout << endl << c + 1 << " ";
            for(int i = 0; i < c + 1; ++i){
                cout << v3[i] << " ";
            }
    }
    return 0;
}
