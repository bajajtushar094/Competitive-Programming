#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b,k;
        cin>>n>>a>>b>>k;
        long long da=n/a;
        long long db=n/b;
        long long dab=n/(a*b/__gcd(a,b));
        if((da+db-2*dab)>=k)
            cout<<"Win"<<'\n';
        else
            cout<<"Lose"<<'\n';
    }
}
