#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 59A
   LINK : https://codeforces.com/problemset/problem/59/A
   */

int main()
{
    char a[101], ar[101];
    int i, j, x = 0, y = 0;
    cin >> a;
    for(i = 0; i < strlen(a); i++){
        if(a[i] >= 'a' and a[i] <= 'z')
            x++;
        if(a[i] >= 'A' and a[i] <= 'Z')
            y++;
    }
    if(x > y){
        strcpy(a, strlwr(a));
    }

    else if(x < y){
        strcpy(a, strupr(a));
        }
    else if(x == y){
        strcpy(a, strlwr(a));
    }

    cout << a << endl;
    return 0;
}

