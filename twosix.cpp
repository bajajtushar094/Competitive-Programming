#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;

        int d=0;


        while(n>1)
        {
            if(n%6==0)
            {
                n=n/6;
            }
            else if(n%3==0)
            {
                n=n*2;
            }
            else
            {
                n=-1;
            }
            d++;
        }

        if(n==1)
        cout<<d<<'\n';
        else
        cout<<-1<<'\n';

    }
}
