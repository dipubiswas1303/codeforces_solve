#include <iostream>


using namespace std;

int main()
{
    unsigned long long int num;
    int x = 0, y = 0;
    cin >> num;
    while(num!=0)
    {
            if((num % 10 == 4 or num % 10 == 7))
                x++;

        num=num/10;
        y++;
    }
    if(x == 4 or x == 7 or x == 47)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

