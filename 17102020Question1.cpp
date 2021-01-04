#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll time =0;
        if(x1==x2||y1==y2)
        {
            time = abs(x1-x2)^abs(y1-y2);
        }
        else if(x1==x2&&y1==y2)
        {
        }
        else
        {
            time = abs(x2-x1)+2+abs(y2-y1);
        }

        cout<<time<<'\n';    
    }
}