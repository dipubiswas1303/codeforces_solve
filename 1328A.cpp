#include <iostream>
#include<bits/stdc++.h>

/*DIPU BISWAS 1328A*/

using namespace std;

int main()
{
    unsigned long long int t;
    cin >> t;
    while(t--)
    {
        unsigned long long int a, b, c = 0;
        cin >> a >> b;
        if(a % b != 0)
        {
            c = b * (a / b + 1) - a;
            cout << c << endl;
        }
        else
            cout << c << endl;
    }
  return 0;
}



