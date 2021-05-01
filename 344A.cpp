#include <iostream>
#include <string.h>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 344A
   LINK : https://codeforces.com/problemset/problem/344/A
   */

int main()
{
    int t, c = 0;
    cin >> t;
    char array_2[] = "00";
    while(t--)
    {
        char array_1[10];
        cin >> array_1;
        if(strcmp(array_1, array_2) == 0){
            continue;
        }
        else{
            c++;
            strcpy(array_2, array_1);
        }

    }
    cout << c << endl;
    return 0;
}

