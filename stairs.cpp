#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    int a =1;
    int b=1;
    int c=0;
    for(int i=3;i<=n;i++)
    {
        c= a+b;
        a=b;
        b=c;
    }

    if(n==2||n==1)
    cout<<1<<'\n';
    else
    cout<<c<<'\n';
}