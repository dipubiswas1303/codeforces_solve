#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 281A
   LINK : https://codeforces.com/problemset/problem/281/A
   */

int main()
{
    char a[1000];
    cin >> a;
    int i;
    for(i = 0; i < strlen(a); i++)
    {
        if(i == 0){
            char x;
            x = toupper(a[i]);
            cout << x;
        }
        else
            cout << a[i];
    }

    return 0;
}


