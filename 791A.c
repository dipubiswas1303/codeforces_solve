#include<stdio.h>

int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=0;i<=10;i++){
        if(a>b){
            printf("%d", i);
        break;
        }
        else{
            a=a*3;
            b=b*2;
        }
    }
    return 0;
}


