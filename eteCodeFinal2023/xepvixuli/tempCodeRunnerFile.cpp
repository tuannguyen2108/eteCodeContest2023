#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, l;
    int min_size;
    cin >> n >> w >> l;
if (l > w){
    if (l >= (w * n))
    {
        min_size = l;
        cout << min_size << endl;
    }
    else if (l == w) 
    {
        min_size = ceil(sqrt(n) * ceil(sqrt(l)) * ceil(sqrt(w)));
        cout << min_size << endl;
    }
    else
    {
        int min_size = ceil(sqrt(n * l * w));
        cout << min_size << endl;
    }
}
else {
    if (w >= (l * n))
    {
        min_size = w;
        cout << min_size << endl;
    }
    else if (l == w)
    {
        min_size = ceil(sqrt(n) * ceil(sqrt(l)) * ceil(sqrt(w)));
        cout << min_size << endl;
    }
    else
    {
        int min_size = ceil(sqrt(n * l * w));
        cout << min_size << endl;
    }
}
    return 0;
}