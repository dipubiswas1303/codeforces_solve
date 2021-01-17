#include <iostream>

using namespace std;

int main()
{
    int num, x = 0, r = 0, y = 0;
    cin >> num;
    r = num;
    while(num!=0)
    {
        if(num % 10 == 4 or num % 10 == 7)
            x++;

        num=num/10;
        y++;
    }
    if(x == y or r % 4 == 0 or r % 7 == 0 or r % 47 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

