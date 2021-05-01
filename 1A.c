#include<stdio.h>

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 1A
   LINK : https://codeforces.com/problemset/problem/1/A
   */

int main()
{
    int a, b, c, d;
    scanf("%d%d%d",&a,&b, &c);
    d=a/c+1;
    b=b-a;

    d=2*(b/c+1)+d;
    printf("%d", d);
}

