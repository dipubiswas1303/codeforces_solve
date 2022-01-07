#include<bits/stdc++.h>

#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"
#define nnn cout << endl

using namespace std;

const int N = 1e7 + 10;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    unordered_set<int> s1, s2;
    map<pair<int, int>, int> m1, m2;
    while(q--){
        int x, y;
        cin >> x >> y;
        auto it1 = s1.find(x);
        auto it2 = s2.find(y);
        pair<int, int> p1, p2;
        p1 = {0, x - y};
        p2 = {0, x + y};
        if(it1 != s1.end() || it2 != s2.end() || m1[p1] || m2[p2]){
            NO;
        }else{
            YES;
            s1.insert(x);
            s2.insert(y);
            m1[p1]++;
            m2[p2]++;
        }
    }
    return 0;
}
