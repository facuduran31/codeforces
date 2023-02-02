#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, numMostrar;
    cin >> n;
    string p, P;
    for (int i=0; i<n; i++)
    {
        cin >> p;
        P[0] = p[0];
        if(p.length() > 10)
        {
            cout << p[0] << p.length()-2 << p[p.length()-1] << endl;;
        }
        else
        {
            cout << p << endl;
        }
    }
    return 0;
}
