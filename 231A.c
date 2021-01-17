#include<stdio.h>

int main()
{
    int a, b, c, t, count=0;
    scanf("%d", &t);
    while(t--){
            int x=0;
            scanf("%d%d%d", &a, &b, &c);
            x=a+b+c;
            if(x==2||x==3)
                count++;
            else{}
    }
    printf("%d", count);
    return 0;
}
