#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string S;
        cin>>S;
        int c=0;
        int j;
        int k=0;


        if(S[0]=='1')
        {
            for(int i=1;i<S.size();i++)
            {
                if(S[i]=='0')
                {
                    c++;
                    if((i!=S.size()-1)&&S[i+1]=='1')
                        break;
                }
            }
        }
        cout<<c<<'\n';
    }
}
