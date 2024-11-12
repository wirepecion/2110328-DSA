#include<bits/stdc++.h>
using namespace std;


int main(){

    int N, number;
    cin >> N;

    
    unordered_set<int> numbers;
    bool IsPermutation = true;

    for(int i = 0 ; i < N ;i++)
    {
        cin >> number;
        
        if(number < 1 || number > N){
            IsPermutation = false;
            break;
        }

        if(numbers.count(number)){
            IsPermutation = false;
            break;
        }

        numbers.insert(number);
    }

    if(numbers.size() != N){
        IsPermutation = false;
    }

    if(IsPermutation == true){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}