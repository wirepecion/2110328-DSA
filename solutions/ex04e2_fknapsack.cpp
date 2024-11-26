#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<double, double> &a, const pair<double, double> &b)
{
    return (a.first / a.second) > (b.first / b.second);
}

int main()
{

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long double W, N, value, weight, sum = 0;
    // vector<pair<double,double>> bags;

    cin >> W >> N;
    vector<pair<long double, long double>> bags(N);
    // value
    for (long long int i = 0; i < N; i++)
    {
        cin >> bags[i].first;
    }

    // weight
    for (long long int i = 0; i < N; i++)
    {
        cin >> bags[i].second;
    }

    sort(bags.begin(), bags.end(), compare);

    for (auto &e : bags)
    {
        if (W <= 0)
            break;

        if (W >= e.second)
        {
            W -= e.second;
            sum += (e.first);
        }
        else
        {
            // calcuate fraction of item
            // W = 0;
            sum += (e.first / e.second) * W;
            W = 0;
        }
    }

    // cout << fixed << setprecision(4) << sum;
    cout << fixed << setprecision(4) << sum;

    // for(auto &x:bags){
    //     cout << x.first << ' ' << x.second << endl;
    // }

    return 0;
}