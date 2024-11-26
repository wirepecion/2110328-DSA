#include <bits/stdc++.h>
using namespace std;

vector<int> DNA;
int n, k, len;

bool isVirus(int start, int end, bool reverse){
    int state = end - start;

    // base combiation conditions
    if(state == 2){
        if(!reverse){
            return DNA[start] == 0 && DNA[start + 1] == 1;
        }else{
            return DNA[start] == 1 && DNA[start + 1] == 0;
        }
    }

    // D & C
    int mid = (start + end) / 2;

    if(!reverse){ // not reverse case
        return(isVirus(start, mid, false) || isVirus(start, mid, true)) && isVirus(mid, end, false);
    }else{ // reverse case
        return(isVirus(mid, end, false) || isVirus(mid, end, true)) && isVirus(start, mid, true);
    }

}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> k;

    // len = 2^k  
    len = 1 << k;
    DNA = vector<int>(len);

    while (n--)
    {
        // input
        for(int i = 0 ; i < len; i++){
            cin >> DNA[i];
        }

        cout << (isVirus(0, len, false) ? "yes" : "no") << endl;
    }
    

    return 0;
}