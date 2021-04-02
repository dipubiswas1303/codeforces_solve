#include <iostream>
#include<bits/stdc++.h>

/*DIPU BISWAS 318A*/

using namespace std;

int main()
{
    unsigned long long int a, b;
    cin >> a >> b;
    if(a % 2 == 0)
    {
        if(a / 2 >= b){
            cout << 2 * b - 1;
        }
        else
        {
            cout << 2*(b - a / 2);
        }
    }
    else
    {
        if(a / 2 + 1 >= b){
            cout << 2 * b - 1;
        }
        else
        {
            cout << 2*(b - a / 2 - 1);
        }
    }

    return 0;
}

