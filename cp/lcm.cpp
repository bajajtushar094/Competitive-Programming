#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    long long c;
    int max,min;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    for(int i=1;;i++)
    {
        c= max*i;
        if(c%min==0)
            break;
    }
    cout<<c<<'\n';
    return 0;
}
