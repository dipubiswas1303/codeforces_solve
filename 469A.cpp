#include <iostream>

/*DIPU BISWAS 469A*/

using namespace std;

int main()
{
    int n, x, y, i = 0, j = 0, a[203], c = 0;
    cin >> n >> x;
    for(i = 0; i < x; i++)
        cin >> a[i];
    cin >> y;
    for(i = x; i < x + y; i++)
        cin >> a[i];
    /* Sorting*/
    for(i = 0; i < x + y - 1; i++) {
        for(j = i + 1; j < x + y; j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i = 0; i < x + y; i++)
    {
        if(a[i] != a[i + 1])
            c++;
    }
    if(c == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";


    return 0;
}

