#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char ar[3];
    int i, t, x = 0,c=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>ar;
        if(strcmp(ar,"++X")==0||strcmp(ar,"X++")==0)
            c = ++x;

        else if(strcmp(ar,"--X")==0||strcmp(ar,"X--")==0)
            c = --x;
    }
    cout<<c;

    return 0;
}
