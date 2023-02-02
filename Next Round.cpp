#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, N=0;
    cin >> n >> k;
    int H[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> H[i];
    }

    for(int i=1; i<=n; i++)
    {
        if(H[k] != 0)
        {
            if (H[i] >= H[k])
            {
                ++N;
            }

        }
        else
        {
            if(H[i] > H[k])
            {
                ++N;
            }
        }
    }

    cout << N << endl;

    return 0;
}
