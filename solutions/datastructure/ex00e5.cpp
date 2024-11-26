#include <bits/stdc++.h>
using namespace std;

set<string> answer;

string permuline(int n, int k){

    int one = k, zero = n - k;
    string line = "";

    while (zero--)
    {
        line += "0";
    }

    while (one--)
    {
        line += "1";
    }
    
    return line;
}

int main(){

    int n, k; cin >> n >> k;

    string line;
    string check;
    for(int i = 0; i < k; i++) check += "1";
    
    while (n >= k)
    {
        // create fisrt line 
        line = permuline(n,k);
        
        do
        {
            string s = "";
            for(auto e:line) s+= e;
            int res = s.find(check);
            if(res != string::npos) 
            answer.insert(s);
        } while (next_permutation(line.begin(),line.end()));
          
        k++;
    }

    for(auto e:answer){
        cout << e << endl;
    }
    


    return 0;
}