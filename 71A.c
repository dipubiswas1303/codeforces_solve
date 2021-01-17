#include <stdio.h>
#include<string.h>
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
