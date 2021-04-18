#include<bits/stdc++.h>

using namespace std;

/*DIPU BISWAS 520A*/

int main()
{
    int t, c, i = 0, j = 0, x = 0;
    cin >> t;
    string a;
    cin >> a;

    for(i = 0; i < t; i++){
        c = 0;
        for(j = i + 1; j < t; j++){
            if(toupper(a[i]) == toupper(a[j]))
                c = 1;
        }
        if(c == 0)
            x++;
    }
    if(x >= 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

