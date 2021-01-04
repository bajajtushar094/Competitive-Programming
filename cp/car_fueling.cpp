#include<bits/stdc++.h>


using namespace std;

int compute_min_refills(int destination, int fulldistance, vector<int> & stops) {

    int current_refills=0;
    int last_refills;
    int num_refills =0;
    stops.push_back(destination);
    int n = stops.size();

    while(current_refills<=n)
    {
        last_refills = current_refills;
        while((current_refills<=n)&&(stops[current_refills+1]-stops[last_refills]<=fulldistance))
        {
            current_refills +=1;
        }
        if(current_refills==last_refills)
            return -1;

        if(current_refills<=n)
            num_refills++;
    }

    return num_refills;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    stops.push_back(0);

    for (size_t i = 1; i <= n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
