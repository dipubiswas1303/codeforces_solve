#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 41A
   LINK : https://codeforces.com/problemset/problem/41/A
   */

int main()
{
    char a[1000], b[1000];
    cin >> a >> b;
    strcpy(b, strrev(b));
    if(strcmp(a, b) == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

