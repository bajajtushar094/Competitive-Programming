#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=1;i<=b;i++)
    {
        if(a%10!=0)
        {
            a-=1;
        }
        else
        {
            a/=10;
        }
    }

    cout<<a;
}
