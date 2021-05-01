#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 705A
   LINK : https://codeforces.com/problemset/problem/705/A
   */

int main()
{
    int a, i = 0;
    cin >> a;
    for(i = 1; i <= a; i++){
        if(i % 2 == 0)
            cout << "I love ";
        else
            cout << "I hate ";
        if(a > i)
            cout << "that ";
    }
    cout << "it";

    return 0;
}


