#include <iostream>
#include <string.h>

/*DIPU BISWAS C++ Programmer*/

using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    char array_2[] = "00";
    while(t--)
    {
        char array_1[10];
        cin >> array_1;
        if(strcmp(array_1, array_2) == 0){
            continue;
        }
        else{
            c++;
            strcpy(array_2, array_1);
        }

    }
    cout << c << endl;
    return 0;
}

