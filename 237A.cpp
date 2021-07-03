#include <bits/stdc++.h>

using namespace std;

/*******************
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 237A
LINK : https://codeforces.com/problemset/problem/237/A
*******************/

int main()
{
    int n;
    cin >> n;
    map<pair<int , int>, int> p;
    int  m = 0;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        p[{x, y}]++;
        if(p[{x, y}] > m){
            m = p[{x, y}];
        }
    }
    cout << m << endl;
    return 0;
}

