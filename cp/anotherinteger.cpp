#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long i=ceil(double(abs(a-b))/double(10));
        cout<<i<<'\n';
    }
}
