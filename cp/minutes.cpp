#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        float b;
        cin>>a>>b;
        float time = a+ (b/100);
        float diff = (24-time)*60;
        cout<<abs(diff);

    }
}
