#include <bits/stdc++.h>
using namespace std;

long long t;

void input()
{
    cin >> t;
}

void output()
{
    long long a[100];
    a['T' - 'A'] = 'A' - 'A';
    a['A' - 'A'] = 'T' - 'A';
    a['G' - 'A'] = 'C' - 'A';
    a['C' - 'A'] = 'G' - 'A';
    long long len;
    string s1, s2;
    while (t--)
    {
        long long ans = 0;
        cin >> len;
        cin >> s1 >> s2;
        long long tmp = 0;
        while (tmp < len)
        {
            bool check = false;
            while (a[s1[tmp] - 'A'] != (s2[tmp] - 'A') && tmp < len)
            {
                tmp++;
                check = true;
            }
            if (check == true)
                ans++;
            else
                tmp++;
        }
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    input();
    output();
}
