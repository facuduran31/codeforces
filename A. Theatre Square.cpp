#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, a, i, j;
    cin >> n >> m >> a;
    i = n/a;
    if (n%a != 0)
    {
        ++i;
    }
    j = m/a;
    if(m % a != 0){
        ++j;
    }

    if(a >= n){
        i = 1;
    }
    if(a >= m){
        j = 1;
    }

    cout << i*j << endl;
    return 0;
}
