#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
      int c;
      cin>>c;
      a.push_back(c);
    }

    sort(a.begin(),a.end());
    cout<<a[n-1]*a[n-2];

    return 0;
}
