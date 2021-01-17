#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t, i, x = 0, k = 0;
    cin >> t;
    char a[t];
    cin >> a;
    for(i = 0; i < t; i++){
        if(a[i] == 'D')
            x++;
        else
            k++;
    }
    if(x == k)
        cout << "Friendship";
    else if(x > k)
        cout << "Danik";
    else
        cout << "Anton";
    return 0;
}

