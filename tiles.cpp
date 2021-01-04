#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[2*n][2];
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;i<2;j++)
            {
                int c;
                cin>>c;
                a[i][j]=c;
            }
        }
        if(m%2!=0)
            cout<<"NO"<<'\n';
        else
        {
            int t=0;
            for(int i=0;i<2*n;i+=2)
            {
                if(a[i][1]==a[i+1][0])
                {
                    t++;
                    break;
                }
            }
            if(t>0)
            {
                cout<<"YES"<<'\n';
            }
            else
                cout<<"NO"<<'\n';
        }
    }
}
