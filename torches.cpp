#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long noOfSticksByStick;
        long long noOfSticksForCoal,torches;
        cin>>noOfSticksByStick>>noOfSticksForCoal>>torches;

        long long sticks=noOfSticksByStick,coals=0;
        int count=0;
        while(1)
        {
            if(sticks>coals)
            {
                sticks-=noOfSticksForCoal;
                coals+=1;
            }
            else if(coals>sticks)
            {
                sticks +=noOfSticksByStick-1;
            }
            else if(sticks==coals)
            {
               count ++;
               sticks =0;
               coals=0;
            }

        }

        cout<<count<<'\n';

    }
}
