#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, one = 0, two = 0, three = 0, four = 0, ans = 0;

    cin >> n;

    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 4)
            four++;
        else if(a[i] == 3)
            three++;
        else if(a[i] == 2)
            two++;
        else if(a[i] == 1)
            one++;
        else{}
    }
    if(three > one and one != 0){
        ans = ans + one;
        three = three - one;
        one = 0;
    }
    else if(three < one and three != 0){
        ans = ans + three;
        one = one - three;
        three = 0;
    }
    else if(three == one and one != 0){
        ans = ans + one;
        three = 0;
        one = 0;
    }
    else{}
    if(two != 0)
    {
        if(two % 2 == 0)
            {
                ans = ans + two / 2;
                two = 0;
            }
        else
        {
            ans = ans + two / 2;
            two = 2;
        }
    }
    else{}
    if(two != 0 and one != 0){
        ans = ans + 1;
        one = one - 2;
    }
    else if(two == 2)
        ans = ans + 1;
    else{}
    if(three != 0)
        ans = ans + three;
    else if(one >= 0)
        {
            ans = ans + one / 4;
            if(one % 4 != 0)
                ans++;
        }
    else{}

    ans = ans + four;
    cout << ans << endl;
    return 0;
}
