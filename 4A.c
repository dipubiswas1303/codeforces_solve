#include<stdio.h>

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 4A
   LINK :https://codeforces.com/problemset/problem/4/A
   */

int main()
{
    int w;
    scanf("%d", &w);
    if(w==2)
        printf("NO\n");
    else if(w%2==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
