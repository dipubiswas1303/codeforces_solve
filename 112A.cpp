#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 112A
   LINK : https://codeforces.com/problemset/problem/112/A
   */

int main()
{
    char a[101], b[101];
    cin>>a>>b;
    strlwr(a);
    strlwr(b);

    int k = strcmp(a, b);
    cout<<k;

    return 0;
}
