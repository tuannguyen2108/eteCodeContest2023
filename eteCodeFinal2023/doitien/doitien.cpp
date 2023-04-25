#include <bits/stdc++.h>
using namespace std;

int t;

void input()
{
    cin >> t;
}

void output()
{
    int a[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    while (t--)
    {
        int money;
        cin >> money;
        int temp = 0;
        int i = 0;
        while (money > 0 && i < 9)
        {
            
            temp += money / a[i];
            money -= (money / a[i]) * a[i];
            i++;
        }
        cout << temp << endl;
    }
}

int main()
{
    input();
    output();
}
