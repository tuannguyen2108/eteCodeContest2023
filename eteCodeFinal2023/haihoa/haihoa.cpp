#include <iostream>
using namespace std;
int n,m, f[101][101];
char a[101][101];

void input()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
    for(int j = 1; j <= m; j ++) 
    {
        cin >> a[i][j];
        if(a[i][j] == 'x' || a[i][j] == 'o') f[i][j] = -1;
    }
}

void output()
{
    f[1][1] = 0;
    for(int j = 2; j <= m; j ++)
    {
        if(f[1][j-1] == -1) f[1][j] = -1;
        else
        {
            if(a[1][j] == '-') f[1][j] = f[1][j-1];
            if(a[1][j] == '*') f[1][j] = f[1][j-1] + 1;
        }
    }
    for(int i = 2; i <= n; i ++)
    {
        if(f[i-1][1] == -1) f[i][1] = -1;
        else
        {
            if(a[i][1] == '-') f[i][1] = f[i-1][1];
            if(a[i][1] == '*') f[i][1] = f[i-1][1] +1;
        }
    }
    for(int i = 2; i <= n; i ++)
    {
        for(int j = 2; j <= m; j ++)
        {
            if(f[i-1][j] == -1 && f[i][j-1] == -1) f[i][j] = -1;
            else
            {
                if(a[i][j] == '-') f[i][j] = max(f[i-1][j],f[i][j-1]);
                if(a[i][j] == '*') f[i][j] = max(f[i-1][j],f[i][j-1]) + 1;
            }
        }
    }
    f[n][m] = max(f[n-1][m],f[n][m-1]);
    cout << f[n][m];
}

int main() {
    input();
    output();
}