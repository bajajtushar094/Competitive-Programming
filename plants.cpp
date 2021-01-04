#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        set<pair<int,int>> plants;
        for(int i=0;i<k;i++)
        {
            int x,y;
            cin>>x>>y;
            plants.insert(make_pair(x,y));
        }

        int fences=0;
        for(auto i : plants)
        {
            fences+=4;
            int x= i.first;
            int y= i.second;
            if(plants.find(make_pair(x,y+1))!=plants.end())
            {
                fences--;
            }
            if(plants.find(make_pair(x,y-1))!=plants.end())
            {
                fences--;
            }
            if(plants.find(make_pair(x+1,y))!=plants.end())
            {
                fences--;
            }
            if(plants.find(make_pair(x-1,y))!=plants.end())
            {
                fences--;
            }
        }

        cout<<'\n'<<fences;
    }
}
