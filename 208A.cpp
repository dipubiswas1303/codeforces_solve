#include <iostream>
#include<bits/stdc++.h>

/*DIPU BISWAS 208A*/

using namespace std;

int main()
{
    int i, j = 0, c;
    string a, b = "";
    getline(cin , a);
    for(i = 0; i < a.size(); i++){
        if(a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            c++;
            i = i + 2;
            if(j == 1 && c == 1)
                b = b + " ";
        }
        else{
            b = b + a[i];
            j = 1;
            c = 0;
        }
    }
    cout << b;
    return 0;
}



