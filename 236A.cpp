#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 236A
   LINK : https://codeforces.com/problemset/problem/236/A
   */

int main()
{
    char a[1000];
    cin >> a;
    int i, j, c = 0;

    for(i = 0; i < strlen(a); i++)
    {
        int  x = 0;
        for(j = i + 1; j < strlen(a); j++)
        {
            if(a[i] == a[j]){
                x++;
            }
        }
        if(x != 0)
            c++;
    }
    c = strlen(a) - c;
    if(c % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}

