#include <iostream>

using namespace std;

   /*
   NAME : DIPU BISWAS
   JUST CSE 2019 - 2020
   PROBLEM CODE : 200B
   LINK : https://codeforces.com/problemset/problem/200/B
   */

int main()
{
    int n, sum = 0;
    cin >> n;
    int k = n;
    while(n--)
    {
        int a;
        cin >> a;
        sum = sum + a;
    }
    cout << (float)sum / k;

    return 0;
}
