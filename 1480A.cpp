#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 1480A
   LINK : https://codeforces.com/problemset/problem/1480/A
   */

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char s[100];
        cin >> s;
        int i, k = 0, d = strlen(s);
        for(i = 0; i < d; i++){
            if(k % 2 == 0){
                if(s[i] == 'a')
                    cout << 'b';
                else
                    cout << 'a';
            }
            else
            {
                if(s[i] == 'z')
                    cout << 'y';
                else
                    cout << 'z';
            }
        k++;
        }
    cout << endl;
    }
    return 0;
}
