#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d",&a,&b, &c);
    d=a/c+1;
    b=b-a;

    d=2*(b/c+1)+d;
    printf("%d", d);
}

