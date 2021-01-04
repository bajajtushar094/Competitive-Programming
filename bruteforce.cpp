#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    set<ll> nums;
    for(int i=0;i<n;i++)
    {   
        ll c;
        cin>>c;
        nums.insert(c);
    }

    ll base = *(++nums.begin());
    ll sum=0;
    auto k= ++nums.begin();
    for(auto i= ++k;i!=nums.end();i++)
    {
        ll num = *i;
        ll divide=num/base;
        sum+=((divide+1)*base)-num;
    }
    cout<<sum<<'\n';
}