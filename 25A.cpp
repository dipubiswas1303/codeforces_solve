#include <iostream>
#include<bits/stdc++.h>

/*DIPU BISWAS 25A*/

using namespace std;

int main()
{
    int s;
    cin >> s;
    int a[s], i = 0, j = 0, k = 0, x = 0, odd = 0, even = 0, ji, ki, oddi, eveni, xi;
    for(i = 0; i < s; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            even++;
            eveni = i + 1;
        }

        else if(a[i] % 2 != 0){
            odd++;
            oddi = i + 1;
        }

        else if(a[i] % 3 == 0){
            j++;
            ji = i + 1;
        }
        else if(a[i] % 5 == 0){
            k++;
            ki = i + 1;
        }
        else
            {
                x++;
                xi = i + 1;
            }
    }
    if(even == 1)
        cout << eveni;
    else if(odd == 1)
        cout << oddi;
    else if(j == 1)
        cout << ji;
    else if(k == 1)
        cout << ki;
    else
        cout << xi;


  return 0;
}

