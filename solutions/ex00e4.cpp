#include <bits/stdc++.h>
using namespace std;

int factorial(int n){

    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

int C(int n, int k){
    return factorial(n) / (factorial(n-k) * factorial(k));
}

int main(){

    int A, B; cin >> A >> B;

    vector<string> s;

    int one = A, zero = B - A;


    while (zero--)
    {
        s.push_back("0");
    }

    while (one--)
    {
        s.push_back("1");
    }

    // int line = 0;
    // line = C(B,A);
    // cout << line << endl;
    set<string> answer;

    do{
        string word = "";
        for(auto &i: s) word+= i;
        answer.insert(word);
    }
    while (next_permutation(s.begin(),s.end()));

    for(auto x:answer){
        cout << x << endl;
    }
    
    

    return 0;
}