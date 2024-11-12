#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<double,double> &a, const pair<double,double> &b){
    return a.first > b.first;
}

int main(){

    double W, N, value, weight, sum = 0;
    // vector<pair<double,double>> bags;

    cin >> W >> N;
    vector<pair<double,double>> bags(N);
    // value
    for (int i = 0; i < N; i++)
    {
        cin >> value;
        bags[i].first = value;
    }

    // weight
    for (int i = 0; i < N; i++)
    {
        cin >> weight;
        bags[i].second = weight;
        bags[i].first /= bags[i].second;
    }

    sort(bags.begin(), bags.end(), compare);

    while (W > 0)
    {
        if(bags[i].second <= W){

        }
    }
    
    
    for(auto &x:bags){
        cout << x.first << ' ' << x.second << endl;
    }

    return 0;
}