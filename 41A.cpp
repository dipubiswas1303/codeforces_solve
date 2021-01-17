#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[1000], b[1000];
    cin >> a >> b;
    strcpy(b, strrev(b));
    if(strcmp(a, b) == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

