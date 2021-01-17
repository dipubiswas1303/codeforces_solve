#include <iostream>

using namespace std;

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

