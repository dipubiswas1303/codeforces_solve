#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, c = 0;
    char a[100];
    cin >> a;
    for(i = 1; i < strlen(a); i++) {
        if(a[i - 1] == a[i]) {
            c++;
            if(c == 6) break;
        }
        else c = 0;
    }
    if(c == 6) cout << "YES";
    else cout << "NO";

    return 0;
}

