#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0);

    int N, M, K, number;

    cin >> N >> M >> K;
    vector<int> Starter;
    vector<int> Questions;

    for(int i = 0 ; i < N ; i++){
        cin >> number;
        Starter.push_back(number);
    }

    sort(Starter.begin(), Starter.end());

    for(int i = 0 ; i < N ; i++){
        cin >> number;
        Questions.push_back(number);
    }

    for(int i = 0 ; i < M ; i++){
        int p = Questions[i];

        int left = p - K - 1;
        int right = p + K;

        auto lower =  upper_bound(Starter.begin(), Starter.end(), left);
        auto upper =  upper_bound(Starter.begin(), Starter.end(), right);

        int result = upper - lower;

        cout << result << " ";
    }


    return 0;
}