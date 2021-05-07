#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : 1520B
    LINK : https://codeforces.com/contest/1520/problem/B
    */
int len(long long int n)
{
    int c = 0;
    while(n != 0)
    {
        n = n / 10;
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x;
        cin >> x;
        int k = len(x);
        int ans = 0, z = 0, g = 0;
        ans = (k - 1) * 9;
        int y[k];
        for(int i = k - 1; i >= 0; i--){
            y[i] = x % 10;
            x = x / 10;
        }
        if(k == 1)
            g = y[0];
        else if(y[0] > y[1])
            g = y[0] - 1;
        else if(y[0] < y[1])
            g = y[0];
        else{
            for(int i = 1; i < k; i++){
                if(y[0] == y[i])
                    g = y[0];
                else{
                    if(y[i-1] < y[i]){
                        g = y[0];
                        break;
                    }
                    else
                        {
                            g = y[0] - 1;
                            break;
                        }
                }
            }
        }
        cout << ans + g << endl;
    }
    return 0;
}

