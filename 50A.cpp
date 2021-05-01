#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 50A
   LINK : https://codeforces.com/problemset/problem/50/A
   */

int main()
{
    int a, b, x, c=0;
    cin>>a>>b;
    x = a/2;
    c = x*(b/1);
    if(a%2!=0)
        c = c + b/2;

    cout<<c;

    return 0;
}

