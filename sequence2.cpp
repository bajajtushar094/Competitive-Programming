#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a,b,c,ans;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            a.push_back(t);
        }
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            b.push_back(t);
        }
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            c.push_back(t);
        }

        ans[0]=a[0];
        for(int i=1;i<n;i++)
        {
            for(int i=0;i<3;i++)
            {
                if(a[i-1]==a[i])
                {
                    if(a[i-1]!=b[i])
                    {
                        a[i]=b[i];
                    }
                    else
                    {
                        if(a[i-1]!=c[i])
                        {
                            a[i]=c[i];
                        }
                    }
                }
            }
        }

        if(ans[n-1]==ans[0])
        {
            if(a[n-1]!=ans[0]&&a[n-1]!=ans[n-2])
            {
                ans[n-1]=a[n-1];
            }
            else
            {
                if(b[n-1]!=ans[0]&&b[n-1]!=ans[n-2])
                {
                    ans[n-1]=b[n-1];
                }
                else
                {
                    if(b[n-1]!=ans[0]&&b[n-1]!=ans[n-2])
                    {
                        ans[n-1]=a[n-1];
                    }
                }
            }
        }

        cout<<'\n';
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<' ';
        }
        cout<<'\n';



    }
}
