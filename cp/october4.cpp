#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int N,X,p,k;
        cin>>N>>X>>p>>k;
        vector<int> nums_unsorted;
        for(int i=0;i<N;i++)
        {   
            int q;
            cin>>q;
            nums_unsorted.push_back(q);
        }

        auto it= find(nums_unsorted.begin(),nums_unsorted.end(),X);
        if(it==nums_unsorted.end())
        {
            nums_unsorted.erase(nums_unsorted.begin()+p);
            nums_unsorted.emplace(nums_unsorted.begin()+p+1);
        }
        multiset<int> nums_sorted(nums_unsorted.begin(),nums_unsorted.end());
        
        auto it2= nums_sorted.find(X);

        int index = distance(it2,nums_sorted.begin());

        cout<<abs(index-p)<<'\n';
    }
}