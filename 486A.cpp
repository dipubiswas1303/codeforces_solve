#include <iostream>
#include<bits/stdc++.h>

/*DIPU BISWAS 486A*/

using namespace std;

int main()
{
    long long int a, n = 0, m = 0;
    cin >> a;
    if(a % 2 == 0){
        n = a / 2;
        cout << (n * (n + 1) - n * n);
    }
    else
    {
        n = a / 2;
        m = n + 1;
        cout << (n * (n + 1) - m * m);
    }
    return 0;
}
