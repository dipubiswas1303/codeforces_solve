#include <iostream>

/*DIPU BISWAS 1030A*/

using namespace std;

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



