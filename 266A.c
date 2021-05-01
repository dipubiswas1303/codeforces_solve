#include <stdio.h>

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 266A
   LINK : https://codeforces.com/problemset/problem/266/A
   */

int main()
{
    int n, i, c = 0;
    scanf("%d", &n);
    char ar[n];
    scanf("%s", &ar);
    for(i = 1; i < n; i++)
    {
        if(ar[i - 1] == ar[i])
            c++;
    }
    printf("%d", c);

    return 0;
}

