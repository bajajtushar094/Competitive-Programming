#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,d,k,n,inc;
        cin>>a>>d>>k>>n>>inc;
        int ques=a;
        for(int i=2;i<=n;i++)
        {
            ques+=d;
            if(i%k==0)
                d+=inc;
        }
        cout<<ques<<'\n';
    }
}
