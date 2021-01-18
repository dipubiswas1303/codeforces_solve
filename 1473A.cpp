#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, d, i, j, x = 0, y = 0;
        cin >> n >> d;
        int a[n];
        for(i =0; i < n; i++){
            cin >> a[i];
            if(d >= a[i])
               x++;
        }
        if(x == n)
            cout << "YES" << endl;
        else{
            for(i = 0; i < n; i++){
                for(j = i + 1; j < n; j++){
                    if(a[i] > a[j]){
                       y = a[i];
                       a[i] = a[j];
                       a[j] = y;
                    }
                }
            }
            if(d >= a[0] + a[1] )
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
