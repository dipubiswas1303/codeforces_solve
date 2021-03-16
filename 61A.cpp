#include <iostream>
#include <string.h>

/*DIPU BISWAS 61A*/

using namespace std;

int main()
{
    char a[101], b[101];
    cin >> a >> b;

    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == '1' && b[i] == '1')
            cout << 0;
        else if(a[i] == '0' && b[i] == '0')
            cout << 0;
        else
            cout << 1;
    }

    return 0;
}
