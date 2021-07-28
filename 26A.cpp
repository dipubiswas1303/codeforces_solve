#include <bits/stdc++.h>

using namespace std;
/***********
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : A. Almost Prime
LINK : https://codeforces.com/problemset/problem/26/A
************/
const int N = 3005;
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
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
            int ct = 0;
        for(int j = 0; j < n; j++){
            if(prime[j] == 0 && (i % j) == 0){
               ct++;
            }
        }
        if(ct == 2){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
