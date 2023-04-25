#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000];

void input()
{
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
}

void output()
{
    cout << a[1] << " ";
    for(int i = 2; i <= n; i ++)
    {
        sort(a+1,a+1+i);
        bool check = false;
        for(int j = 2; j <= i; j ++)
        {
            int tmp = 1;
            while(a[j] == a[j-1] && j <= i)
            {
                j++;
                tmp ++;
            }
            if(tmp == 1)
            {
                check = true;
                cout << a[j-1] << " ";
                break;
            }
            if(a[i] != a[i - 1] && j == i)
            {
                check = true;
                cout << a[i] << " ";
                break;
            }
        }
        if(check == false) cout << -1 << " ";
    }
}

int main()
{
    input();
    output();
}