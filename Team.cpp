#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, P, V, T, cont=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> P >> V >> T;
        if (P && V || (V && T || (P && T))){
            ++cont;
        }
    }
    cout << cont << endl;
    return 0;
}
