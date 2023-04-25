#include<bits/stdc++.h>
using namespace std;

int t;

void input()
{
    cin >> t;
}

void output()
{
    while (t--)
    {
        string s = "";
        cin >> s;
        bool check1 = false;
        bool check2 = false;
        int tmp = 0;
        for (int i = 0; i < s.size(); i++)
        {
            tmp += s[i] - '0';
            if ((s[i] - '0') % 2 == 0)
                check1 = true;
        }
        if (tmp % 3 == 0)
            check2 = true;
        if (check1 == true && check2 == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    input();
    output();
}