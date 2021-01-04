#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        long long p=0;
        // for(int i=1;i<=k;i++)
        // {
        //     if(i%2!=0)
        //         p+=a;
        //     else
        //         p-=b;
        // }
        if(k%2==0)
        {
            p+=(k/2)*a;
            p-=(k/2)*b;
        }
        else
        {
            p+=(k/2+1)*a;
            p-=(k/2)*b;
        }

        cout<<p<<'\n';
    }
}
