#include <iostream>

/*DIPU BISWAS 200B*/

using namespace std;

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
