#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    vector<ll> v;
    while(t--){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int l = v.size();
    for(int i = 1; i < l - 1; ++i){
        if(v[i+1] < v[i-1] + v[i]){
            YES;
            return 0;
        }
    }
    NO;
    return 0;
}
