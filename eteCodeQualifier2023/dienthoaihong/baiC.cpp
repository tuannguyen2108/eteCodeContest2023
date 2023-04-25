#include<bits/stdc++.h>
using namespace std;

void output()
{
    string s;
    long long n;
    cin >> n;
    cin >> s;
    for (long long i = 1; i < n; i += 3)
    if (s[i] != s[i+1]){
        cout << "NO\n";
        return;
        }
    cout << "YES\n";
    }
 
int main()
{
    int t;
	cin >> t;
	while(t--) 
    output();
}