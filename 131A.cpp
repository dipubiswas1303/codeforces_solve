#include <iostream>
#include<bits/stdc++.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 131A
   LINK : https://codeforces.com/problemset/problem/131/A
   */

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

