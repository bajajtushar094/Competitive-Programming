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
        vector<ll> numbers;
        ll sum_suffix=0;
        for(int i=0;i<n;i++)
        {
            ll c;
            cin>>c;
            numbers.push_back(c);
            sum_suffix+=c;
        }

        ll sum_prefix = numbers[0];

        ll tot_sum= sum_prefix+sum_prefix;
        int c=0;

        for(int i=1;i<n;i++)
        {
            sum_suffix-=numbers[i-1];
            sum_prefix+=numbers[i];
            ll sum_now=sum_prefix+sum_suffix;
            if(sum_now<tot_sum)
            {   
                tot_sum=sum_now;
                c=i;
            }     
        }

        cout<<c+1<<'\n';
    }
}