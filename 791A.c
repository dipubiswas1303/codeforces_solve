#include<stdio.h>

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 791A
   LINK : https://codeforces.com/problemset/problem/791/A
   */

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


