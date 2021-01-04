#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        bool flag= false;
        ll q1;
        ll days=0;
        cin>>q1;
        if(q1<k)
        {
            flag=true;
            days=1;
        }
        else
        {
            ll qremain=q1-k;
            for(ll i=1;;i++)
            {
                ll q;
                cin>>q;
                qremain=qremain+q-k;
                if(qremain<k)
                {
                    flag=true;
                    days=i+1;
                    break;
                }
            }
        }

        cout<<days<<'\n'; 
    }
}