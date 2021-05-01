#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 282A
   LINK : https://codeforces.com/problemset/problem/282/A
   */

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
