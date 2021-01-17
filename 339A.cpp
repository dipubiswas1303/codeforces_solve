#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char arr[1000], ar[1000];
    int i, j, k=0;
    cin>>arr;
    j = strlen(arr);
    for(i=0; i<j; i++)
    {
        if(arr[i]=='+'){}
        else
        {
            ar[k]=arr[i];
            k++;
        }
    }

    for(i=0; i<k; i++)
    {
        for(j=i+1; j<k; j++)
        {
            if(ar[i] > ar[j])
            {
                char x = ar[i];
                ar[i] = ar[j];
                ar[j] = x;
            }
        }
    }

    for(i=0; i<k; i++)
    {
        if(i==k-1)
            cout<<ar[i];
        else
            cout<<ar[i]<<"+";
    }

    return 0;
}

