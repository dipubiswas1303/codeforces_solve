#include <bits/stdc++.h>
int H[26];
int h[26];

using namespace std;
/*******************
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 141A
LINK : https://codeforces.com/problemset/problem/141/A
*******************/

int main()
{
    int x = 1, y = 0;
    string a, b, c;
    cin >> a >> b >> c;
    y = a.size() + b.size();
    if(y != c.size())
    {
        cout << "NO" << endl;
    }
    else{

    for(int i = 0; i < a.size(); i++){
        H[a[i] - 65]++;
    }
    for(int i = 0; i < b.size(); i++){
        H[b[i] - 65]++;
    }
    for(int i = 0; i < c.size(); i++){
        h[c[i] - 65]++;
    }
    for(int i = 0; i < 26; i++){
        if(H[i] >= h[i] ){
            if(h[i] == 0 && H[i] != 0){
                cout << "NO";
                x = 0;
                break;
            }
            x = 1;
        }
        else{
            cout << "NO";
            x = 0;
            break;
        }
    }
    if(x == 1)
        cout << "YES";
    }
    return 0;
}
