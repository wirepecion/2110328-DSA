#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<char> box;
    vector<char> group;
    
    for (auto line : group)
    {
        if(line == '{' || line == '[' || line == '('){
            box.push(line);
        }

        if(line == '}'){
            char check = box.top();
            if(check == '{'){
                box.pop();
            }
        }

        if(line == ']'){
            char check = box.top();
            if(check == '['){
                box.pop();
            }
        }
        
        if(line == ')'){
            char check = box.top();
            if(check == '('){
                box.pop();
            }
        }
    }

    if(box.empty()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}