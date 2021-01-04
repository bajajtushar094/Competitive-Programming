#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    int c=0;
    for(int i=1;i<n;i++)
    {
        c =(a+b)%10;
        a=b;
        b=c;
    }
    cout<<c;
    return 0;

}
