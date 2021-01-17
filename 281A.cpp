#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[1000];
    cin >> a;
    int i;
    for(i = 0; i < strlen(a); i++)
    {
        if(i == 0){
            char x;
            x = toupper(a[i]);
            cout << x;
        }
        else
            cout << a[i];
    }

    return 0;
}


