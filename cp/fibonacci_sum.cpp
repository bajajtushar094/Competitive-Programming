#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int a=0,b=1,c;
    int sum= a+b;
    for(long long i=1;i<n;i++)
    {
        c=(a+b)%10;
        sum =sum+c;
        a=b;
        b=c;
    }
    cout<<c<<'\n';
}
