#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin>>S;

    for(int i=0;i<S.size();i++)
    {
        if(i==0&&S[i]=='9')
            continue;

        if(S[i]>='5')
            S[i]= char(int('9')-int(S[i])+int('0'));
    }

    cout<<S;
}
