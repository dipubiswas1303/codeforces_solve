#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 116A
   LINK : https://codeforces.com/problemset/problem/1030/A
   */

int main()
{
    int t, k = 0;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a == 1)
            k++;
    }
    if(k == 0)
        cout << "EASY";
    else
        cout << "HARD";
    return 0;
}



