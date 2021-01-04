#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int m;
    cin>>n>>m;
    long long a=0,b=1,c;;
    for(long long i=1;i<n;i++)
    {
        c=(a+b)%m;
        a=b;
        b=c;
    }
    cout<<c<<'\n';
}
