#include <stdio.h>

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

