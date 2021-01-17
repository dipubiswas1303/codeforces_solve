#include<stdio.h>

int main()
{
    int a, b, c, n=0, x, i;
    scanf("%d%d", &a, &b);
    int ar[a];
    for(i=0; i<a; i++)
        scanf("%d", &ar[i]);
    x=ar[b-1];
    for(i=0; i<a; i++)
    {
        if(ar[i]!=0)
            if(ar[i]>=x)
                n++;
    }
    printf("%d", n);
    return 0;
}

