#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=n;i!=0;)
    {
        if((i-10)>=0)
        {
            c++;
            i-=10;
            continue;
        }
        else if((i-5)>=0)
        {
            c++;
            i-=5;
            continue;
        }
        else if((i-1)>=0)
        {
            c++;
            i-=1;
            continue;
        }
    }
    cout<<c<<'\n';
}
