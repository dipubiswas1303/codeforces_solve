#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 510A
   LINK : https://codeforces.com/problemset/problem/510/A
   */

int main()
{
    int m, n, i = 0, j = 0, k = 2;
    cin >> m >> n;
    for(i = 0; i < m; i++){
        if(i % 2 == 0)
            for(j = 0; j < n; j++)
                cout << '#';
        else if(i % 2 == 1 && k % 2 == 0){
            for(j = 0; j < n; j++)
                if(j == n - 1)
                    cout << '#';
                else
                    cout << '.';
                k++;
        }
        else if(i % 2 == 1 && k % 2 == 1)
            {
                k--;
                for(j = 0; j < n; j++)
                    if(j == 0)
                        cout << '#';
                    else
                        cout << '.';
            }
    cout << endl;
    }
    return 0;
}
