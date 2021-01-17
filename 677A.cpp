#include <iostream>

using namespace std;

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

