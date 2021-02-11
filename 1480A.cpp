#include <iostream>
#include <string.h>

/*DIPU BISWAS 1480A*/

using namespace std;

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
