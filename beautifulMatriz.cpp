#include <bits/stdc++.h>

using namespace std;

int main()
{
    int matriz[5][5], n=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> matriz[i][j];
            if(matriz[i][j])
            {
                n = fabs(2-i)+fabs(2-j);
            }
        }
    }

    cout << n << endl;

    return 0;
}
