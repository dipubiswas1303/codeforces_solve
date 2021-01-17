#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, i, j, x = 0, y = 0, z = 0;
    cin >> n;
    int a[n][3];

    for(i = 0; i < n; i++)
        for(j = 0; j < 3; j++)
            cin >> a[i][j];

    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++)
            if(j == 0)
                x = x + a[i][j];
            else if(j == 1)
                y = y + a[i][j];
            else
                z = z + a[i][j];
    }
    if(x == 0 && y == 0 && z ==0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

