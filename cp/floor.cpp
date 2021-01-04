#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n<=2)
            cout<<1<<'\n';
        else
        {
            double floor = (double)(n-2)/(double)x;
            floor=(int)ceil(floor);
            cout<<floor+1<<'\n';
        }
    }
}
