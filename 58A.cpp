#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 58A
   LINK : https://codeforces.com/problemset/problem/58/A
   */

int main()
{
    char a[101], b[] = "hello";
    int i, j = 0;
    cin >> a;
    for(i = 0; i < strlen(a); i++){
        if(b[j] == a[i])
        {
            j++;
        }
    }
    if(j == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}


