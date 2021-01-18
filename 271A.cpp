#include <iostream>

using namespace std;


int year(int num)
{
    int a[4], j = 0;
    while(num!=0)
    {
        a[j] = num % 10;
        num=num/10;
        j++;
    }
    if(a[0] != a[1] and a[0] != a[2] and a[0] != a[3] and a[1] != a[2] and a[1] != a[3] and a[2] != a[3])
        return 1;
    else
        return 0;
}

int main()
{
    int y, i;
    cin >> y;
    for(i = y + 1; i < 9015; i++)
    {
        if(year(i) == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}


