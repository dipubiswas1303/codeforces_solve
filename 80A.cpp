#include<bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Panoramix's Prediction
LINK : https://codeforces.com/problemset/problem/80/A
************/

int isprime(int num)
{
    int j, c = 0;
    for(j = 2; j * j <= num; j++){
        if(num % j == 0)
            c++;
    }
    if(c == 0){
        return 1;
    }
    else
        return 0;
}
int main(){
    int x, y, z = 0;
    cin >> x >> y;
    for(int i = x + 1; i <= y; ++i){
        if(isprime(i) == 1){
            z = 1;
            if(i == y){
                cout << "YES" << endl;
                break;
            }
            else{
                cout << "NO" << endl;
                break;
            }
        }
    }
    if(z == 0)
        cout << "NO" << endl;

    return 0;
}
