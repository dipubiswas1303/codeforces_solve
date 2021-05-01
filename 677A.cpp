#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 677A
   LINK : https://codeforces.com/problemset/problem/677/A
   */

int main()
{
    int x, y, i = 0, c = 0;
    cin >> x >> y;
    int a[x];
    for(i = 0; i < x; i++){
        cin >> a[i];
        if(a[i] % y == 0 or a[i] < y){
            if(a[i] < y)
                c++;
            else{
                c = c + a[i] / y;
            }
        }
        else{
            c = c + a[i] / y;
            c++;
        }
    }
    cout << c;
    return 0;
}

