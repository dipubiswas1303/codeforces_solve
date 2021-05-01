#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 133A
   LINK : https://codeforces.com/problemset/problem/133/A
   */

int main()
{
    char a[101];
    cin >> a;
    int i, c = 0;
    for(i = 0; i < strlen(a); i++){
        if(a[i] == 'H' or a[i] == 'Q' or a[i] == '9')
            c++;
    }
    if(c != 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

