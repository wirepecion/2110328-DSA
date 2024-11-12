#include <bits/stdc++.h>
using namespace std;

#define ll long long int

long long findGrandparents(long long person, const unordered_map<long long, long long>& relations) {
    if (relations.find(person) == relations.end()) {
        return -1; // No Dad
    }
    long long father = relations.at(person);
    if (relations.find(father) == relations.end()) {
        return -1; // No Gparents
    }
    return relations.at(father);
}


int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    ll N, M, Parents, Childs;
    cin >> N >> M;

    unordered_map<ll,ll> relations; 

    for(ll i = 0 ; i < N ; i++){
        cin >> Parents >> Childs;
        relations[Childs] = Parents;
    }


    for(int i = 0 ; i < M; i++){
        ll A, B;
        cin >> A >> B;

        if(A == B){
            cout << "NO" << endl;
            continue;
        }

        long long grandA = findGrandparents(A, relations);
        long long grandB = findGrandparents(B, relations);

        if(grandA != -1 && grandA == grandB){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    

    return 0;
}