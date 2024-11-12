#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M, y, m;
    cin >> N >> M;

    set<pair<int, int>> date;

    for (int i = 0; i < N; i++)
    {
        cin >> y >> m;
        date.insert({y,m});
    }


    for(int i = 0 ; i < M ; i++){

        pair<int, int> questions;
        cin >> questions.first >> questions.second;

        auto it = date.lower_bound(questions);

        if(*it == questions){
            cout << "0 0 ";
        }else if(it == date.begin()){
            cout << "-1 -1 ";
        }else{
            it--;
            cout << it->first << " " << it->second << " ";
        }

    }
    


    return 0;
}