#include <stdio.h>
#include<string.h>

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 71A
   LINK : https://codeforces.com/problemset/problem/71/A
   */

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
    int  j;
    char a[100];
        scanf("%s", &a);
        j=strlen(a);
        if(j>10)
        printf("%c%d%c\n", a[0], j-2, a[j-1]);
        else
        printf("%s\n", a);
    }
    return 0;
}
