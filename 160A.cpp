#include <iostream>

using namespace std;

int main()
{
    int x, y = 0, z = 0, i, j, c = 0, t;
    cin >> x;
    int a[x];
    for(i = 0; i < x; i++){
        cin >> a[i];
        y = y + a[i];
    }
    for(i = 0; i < x; i++){
        for(j = i + 1; j < x; j++){
            if(a[i] < a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(i = 0; i < x; i++){
        if(z <= y - z){
            c++;
        }
        z = z + a[i];
    }
    cout << c;
    return 0;
}

