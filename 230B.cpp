#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : B. T-primes
LINK : https://codeforces.com/contest/230/problem/B
************/
const int N = 1000005;
int prime[N];

void seive(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 4; i < N; i += 2){
        prime[i] = 1;
    }
    for(int i = 3; i * i < N; i += 2){
        if(prime[i] == 0){
            for(int j = i * i; j < N; j += 2 * i){
                prime[j] = 1;
            }
        }
    }
}

int main() {
    seive();
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        long long y = sqrt(x);
        if(x == y * y){
            if(prime[y] == 0)
                cout << "YES" << endl;
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

