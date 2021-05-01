#include <iostream>
#include <cstdlib>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 263A
   LINK : https://codeforces.com/problemset/problem/263/A
   */

int main()
{
    int a[5][5], x, y, i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            cin>>a[i][j];
            if(a[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2);

    return 0;
}
