#include <iostream>
#include<bits/stdc++.h>

/*DIPU BISWAS 131A*/

using namespace std;

int main()
{
    char  ch[101];
    cin >> ch;
    int i = 0, c = 0, k = 0;
    for(i = 0; i < strlen(ch); i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            c++;
            if(i == 0)
                k++;
        }
    }
    if(c == 0)
        cout << strlwr(ch);
    else if(k == 1 and c == 1)
        for(i = 0; i < strlen(ch); i++){
            if(i == 0)
                cout << static_cast<char>(toupper(ch[i]));
            else
                cout << static_cast<char>(tolower(ch[i]));
        }
    else
        cout << ch;
    return 0;
}

