
#include <bits/stdc++.h>

using namespace std;

/*******************
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : 255A
LINK : https://codeforces.com/problemset/problem/255/A
*******************/

int main() {
	int n;
	cin >> n;
	int s1 = 0, s2 = 0, s3 = 0, c = 1;
	for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(c == 1){
            s1 += x;
            c++;
        }
        else if(c == 2){
            s2 += x;
            c++;
        }
        else{
            s3 += x;
            c = 1;
        }
	}
    int a = max(s1, s2);
    int k = max(s3, a);
    if(s1 == k){
        cout << "chest" << endl;
    }
    else if(s2 == k){
        cout << "biceps" << endl;
    }
    else{
        cout << "back" << endl;
    }
	return 0;
}
