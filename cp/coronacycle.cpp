#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cities,jump,currentCity,cityyoulive;
        cin>>cities>>jump>>currentCity>>cityyoulive;
        bool threat = false;
        int initialcity= currentCity;

            while(true)
            {
                currentCity=(currentCity+jump)%cities;
                if(currentCity==cityyoulive)
                {
                    threat = true;
                    break;
                }

                if(currentCity==initialcity)
                break;
            }
            if(threat==true)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }

        
        
    }
}