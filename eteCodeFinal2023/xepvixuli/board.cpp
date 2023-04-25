#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll mid, ll l, ll w, ll n)
{
    ll tmp1 = mid / l;
    ll tmp2 = mid / w;
    return ((double)tmp1 >= (double)n / (double)tmp2) ? true : false;
}

int main()
{
    ll n, l, w;
    cin >> n >> l >> w;
    ll left = 1, right = 100;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        if (check(mid, l, w, n))
            right = mid - 1;
        else
            left = mid + 1;
    }
    cout << left;
}
