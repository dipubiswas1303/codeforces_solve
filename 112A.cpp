#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

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
