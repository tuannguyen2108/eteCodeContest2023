#include <bits/stdc++.h>
using namespace std;

void output()
{   
    string noun;
    cin >> noun;
    int len = noun.length();
    char last = noun[len - 1];
    char second_last = noun[len - 2];

    if (last == 'h' && (second_last == 'c' )) {
        noun += "es";
    } else
    if (last == 'x' || last == 's' || last == 'o') {
        noun += "es";
    } else
    if (last == 'f' ) {
        noun[len - 1] = 'v';
        noun += "es";
    } else
    if (last == 'e' && (second_last == 'f' )) {
        noun[len - 2] = 'v';
        noun += "s";
    } else
     if (last == 'y' ) {
        noun[len-1] = 'i';
        noun += "es";
    }
    else {
        noun += "s";
    }
    cout << noun << endl;
}

int main() 
{   
    int t;
	cin >> t;
	while(t--) 
    output();
}
