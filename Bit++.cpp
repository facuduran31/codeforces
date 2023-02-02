#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x=0;
    string pal;
    cin >> n;
    while(n--)
    {
        cin >> pal;
        if(pal == "X++" || pal == "++X")
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x;
    return 0;
}
