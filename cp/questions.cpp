#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll q=0;
        ll days=0;
        ll sum =0;
        bool flag = false;
        for(ll i=1;i<=n;i++)
        {
            cin>>q;
            sum+=q-k;
            if(sum<0&&flag==false)
            {
            days=i;
            flag= true;
            }
        }

        if(sum>0&&flag==false)
        {
            days=n+sum/k;
            days++;
        }


        cout<<days<<'\n';
    }
}