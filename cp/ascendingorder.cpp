#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num;
    cin>>num;
    vector<int> a;
    a.push_back(num);
    long long tot=0;
    for(int i=1;i<n;i++)
    {
        int c;
        cin>>c;
        int id = upper_bound(a.begin(),a.end(),c)-a.begin();
        tot+=a.size()-id;
        a.insert(a.begin()+id,c);
    }

    cout<<tot<<'\n';




}