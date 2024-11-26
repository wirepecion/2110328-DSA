#include <bits/stdc++.h>
using namespace std;

int zumaboom(list<int> &l, list<int>::iterator &it, int V){
    auto itback = it;
    int count = 0;

    while (itback != l.end() && *itback == V)
    {
        count++;
        itback--;
    }
    // if (*itback == V) count++;

    auto itfront = it;
    itfront++;

    while (itfront != l.end() && *itfront == V)
    {
        count++;
        itfront++;
    }

    if(count >= 3){
        itback++;
        it = l.erase(itback, itfront);
        return 1;
    }

    return 0;
     
}


int main(){

    ios_base::sync_with_stdio(false); cin.tie(0);

    int N, K, V;
    cin >> N >> K >> V;

    list<int> line;

    while (N--)
    {
        int colors; cin >> colors;
        line.push_back(colors);
    }
    
    auto it = line.begin();
    for(int i = 0 ; i < K ; i++){
        it++;
    }

    it = line.insert(it, V);

    int c = zumaboom(line, it, V);

    while (c)
    {
        it--;
        if(it != line.end()){
            c = zumaboom(line, it , *it);
        }else{
            c = 0;
        }
    }


    if(line.empty()){
        return 0;
    }

    bool first = true;
    for (auto val : line) {
        if (!first) cout << " ";
        cout << val;
        first = false;
    }
    cout << endl;
    

    return 0;
}