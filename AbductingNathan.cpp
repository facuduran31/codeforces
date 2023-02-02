#include <bits/stdc++.h>

int main()
{
    int T, numeroRonda=0;
    long long int k, n, t;
    char rta[100000];
    scanf("%d", &T);
    ++T;
    while(--T)
    {
        scanf("%d %d %d", &k, &t, &n);
        numeroRonda = t+n;
        if((numeroRonda / k) % 2 == 0)
        {
            printf("Thiago \n");
        }else
        {
            printf("Nathan \n");
        }
    }
    printf("%s", rta);
    return 0;
}
