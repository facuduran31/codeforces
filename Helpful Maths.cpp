#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S, rta;
    int uno=0, dos=0, tres=0;
    cin >> S;
    for(int i=0; i < S.length(); i+2)
    {
       switch(S[i]){
            case '1':
                ++uno;
                break;
            case '2':
                ++dos;
                break;
            case '3':
                ++tres;
                break;
        }
    }

    for(int i=0; i<S.length(); i++)
    {
        cout << "llega" << endl;
        while(uno--)
        {
            rta += "1";
            if(uno || dos || tres){
                rta+= "+";
            }
        }
        while(dos--)
        {
            rta += "2";
            if(dos || tres){
                rta+= "+";
            }
        }
        while(tres--)
        {
            rta += "3";
            if(tres){
                rta+= "+";
            }
        }
    }

    cout << rta << endl;

    return 0;
}
