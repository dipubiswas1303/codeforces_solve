#include <iostream>

/*DIPU BISWAS 705A*/

using namespace std;

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


