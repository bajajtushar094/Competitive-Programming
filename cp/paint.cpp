#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,T;
        cin>>n>>T;
        vector<int> balls;
        map<int,int> balls_map;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            balls.push_back(c);
            balls_map[c]=1;
        }

        stable_sort(balls.begin(),balls.end());

        int c,d;
        if(n%2==0)
            c=d=n/2;
        else
        {
            c=n/2;
            d=n/2+1;
        }

        for(int i=0;i<n;i++)
        {

        }



    }
}
