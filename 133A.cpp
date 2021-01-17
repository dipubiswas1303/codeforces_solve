#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[101];
    cin >> a;
    int i, c = 0;
    for(i = 0; i < strlen(a); i++){
        if(a[i] == 'H' or a[i] == 'Q' or a[i] == '9')
            c++;
    }
    if(c != 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

