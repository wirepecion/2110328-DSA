#include <bits/stdc++.h>
using namespace std;


/*
1
 1
2
 1 13 1
3
 1 13 135 13 1

4 
 1 13 135 1357

5
 1 13 135 1357 13579


*/

int main(){

    int n; cin >> n;

    string arr[n];

    for(int i = 0; i < n; i++){
        int odd;
        odd = 2*(i+1)-1;
        arr[i] = to_string(odd);
    }

    string answer[n];

    for(int i = 0 ; i < n; i++){

        string s = "";
        
        for(int j = 0 ; j < i+1 ; j++){
                s += arr[j];
        }
            answer[i] = s;

    }

    for(int i = 0 ; i < n ; i++){
        cout << answer[i];
    }


    for(int i = n-2 ; i >= 0 ; i--){
        cout << answer[i];
    }

    
    return 0;
}