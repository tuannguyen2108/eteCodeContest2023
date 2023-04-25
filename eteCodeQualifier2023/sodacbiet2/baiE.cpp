#include<bits/stdc++.h>
using namespace std;

multiset <int> Q;
set <int> P;
int n;

void input()
{

    cin >> n;
}

void output()
{
    int x;
    for(int i = 1; i <= n; i ++)
    {
        cin >> x;
        Q.insert(x);
        if(Q.count(x) > 1 || P.count(x) > 0)
        {
            Q.erase(x);
            P.insert(x);
        }
        if(Q.empty()) cout << -1 << " ";
        else cout << *Q.begin() << " ";
    }
}

int main()
{ 
    input();
    output();
}