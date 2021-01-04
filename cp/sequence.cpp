#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int> a,b,c;
        vector<long long int> ans(n);
        for(long long int i=0;i<n;i++)
        {
            long long int t;
            cin>>t;
            a.push_back(t);
        }
        for(long long int i=0;i<n;i++)
        {
            long long int t;
            cin>>t;
            b.push_back(t);
        }
        for(long long int i=0;i<n;i++)
        {
            long long int t;
            cin>>t;
            c.push_back(t);
        }

        ans[0]=a[0];
        for(long long int i=1;i<n;i++)
        {
                if(a[i]!=ans[i-1])
                {
                    ans[i]=a[i];
                }
                else if(b[i]!=ans[i-1])
                {
                    ans[i]=b[i];
                }
                else if(c[i]!=ans[i-1])
                {
                    ans[i]=c[i];
                }
        }

        if(ans[n-1]==ans[0])
        {
            if(a[0]!=ans[n-2]&&a[0]!=ans[0])
            {
                ans[n-1]=a[0];
            }
            else if(b[0]!=ans[n-2]&&b[0]!=ans[0])
            {
                ans[n-1]=b[0];
            }
            else if(c[0]!=ans[n-2]&&c[0]!=ans[0])
            {
                ans[n-1]=c[0];
            }
        }


        cout<<'\n';
        for(long long int i=0;i<n;i++)
        {
            cout<<ans[i]<<' ';
        }
        cout<<'\n';

    }
}
