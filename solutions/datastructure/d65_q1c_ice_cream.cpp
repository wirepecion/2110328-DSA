#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0);

    int N, M, start, rate, date, x, Price;
    int date0 = 0;
    bool init_start = true;
    vector<int> pocket(100002,0), rates(100002,0);

    cin >> N >> M >> start;

    // input rate 
    while (N--)
    {
        cin >> date >> rate;
        rates[date] = rate;
    }

    int idx = start;
    rates[0] = idx;
    pocket[0] = idx;

    // init table
    for (int i = 1; i < rates.size(); i++)
    {
        if(rates[i] == 0){
            pocket[i] += pocket[i-1] + idx;
        }else{
            idx = rates[i];
            pocket[i] += pocket[i-1] + idx;
        }
    }
    

    // input price and x
    for(int i = 0 ; i < M ; i++){
        cin >> Price >> x;

        int answer = lower_bound(pocket.begin(), pocket.end(), Price) - pocket.begin();
        
        if(answer > x){
            answer = lower_bound(pocket.begin() + x + 1, pocket.end(), pocket[x] + Price) - pocket.begin();
        }

        cout << answer << " ";
    }

    return 0;
}