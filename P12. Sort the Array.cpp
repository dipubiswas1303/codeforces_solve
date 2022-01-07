#include<bits/stdc++.h>

#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"
#define nnn cout << endl

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, p1 = 0, k = 0, ct = 0;
    cin >> n;
    int a[n], b[n];
    cin >> a[0];
    b[0] = a[0];
    for(int i = 1; i < n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    for(int i = 1; i < n; ++i){
        if(a[i - 1] > a[i]){
            if(ct == 0) p1 = i;
            ct++;
        }else if(ct != 0){
            break;
        }
    }
    sort(a + p1 - 1, a + p1 + ct);
    sort(b, b + n);
    for(int i = 0; i < n; ++i){
        if(a[i] != b[i]){
            k = 1;
            break;
        }
    }
    if(p1 == 0){
        p1 = 1;
    }
    if(k == 1){
        cout << "no" << nn;
    }else{
        cout << "yes" << nn << p1 << " " << p1 + ct << nn;
    }
    return 0;
}
