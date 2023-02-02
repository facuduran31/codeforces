#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    int n;

    cin >> str1 >> str2;

    for (int i=0; i<str1.length(); i++)
    {
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
    }
    if(str1 == str2)
    {
        n=0;
    }
    if(str1 < str2)
    {
        n=-1;
    }
    if(str1 > str2)
    {
        n=1;
    }

    cout << n << endl;

    return 0;
}
