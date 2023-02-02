#include <bits/stdc++.h>

int esPrimo(int);

int main()
{
    long loint n;
    char s[20], S[20];
    long long int p, P=0;
    scanf("%d", &n);
    ++n;
    while(--n)
    {
        scanf("%s %d", s, &p);
        if(esPrimo(p) && (p>P))
        {
            P = p;
            strcpy(S, s);
        }
    }

    printf("%s", S);
    return 0;
}

int esPrimo(int x)
{
    int cont=1;
    for(int i=2; i<=x; i++)
    {
        if(x % i == 0 && (i !=x) )
        {
            return 0;
        }
    }
    return 1;

}
