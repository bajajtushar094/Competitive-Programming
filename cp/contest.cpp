#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> coder;
        for(int i=0;i<n;i++)
        {
            ll c;
            cin>>c;
            coder.push_back(c);
        }

        ll sum= coder[0]+coder[1]+coder[2];

        ll mx= sum;

        for(int i=0;i<n-2;i++)
        {
            sum-=coder[i];
            sum+=coder[i+3];
            mx=max(sum,mx);
        }
        mx=max(sum,mx);
        mx=max(coder[n-1]+coder[n-2]+coder[0],mx);
        mx= max(coder[n-1]+coder[0]+coder[1],mx);

        cout<<mx<<'\n';
    }

}