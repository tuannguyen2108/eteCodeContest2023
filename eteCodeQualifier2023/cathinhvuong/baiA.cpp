#include <bits/stdc++.h>
using namespace std;

int t;

void input() 
{
    cin >> t;
}
void output() 
{
    while(t--)
{
    int m, n;
    cin >> m;
    cin >> n;

    int max_size = (m < n) ? m : n;
    while (m % max_size != 0 || n % max_size != 0) 
    {
        max_size--;
    }
    cout << (m * n) / (max_size * max_size) << endl;
}
}
int main()
{
    input();
    output();
}

