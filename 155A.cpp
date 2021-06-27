#include <bits/stdc++.h>

using namespace std;


    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : 155A
    LINK : https://codeforces.com/problemset/problem/155/A
    */

int main()
{
    int t;
    int min = -1;
    int max = 10001;
    int count = 0;
    cin >> t;
    int a[t];
    for(int i = 0; i < t; i++){
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    for(int i = 1; i < t; i++){
        if(max < a[i]){
            max = a[i];
            count++;
        }
        if(min > a[i]){
            min = a[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

