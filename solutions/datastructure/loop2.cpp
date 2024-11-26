#include <bits/stdc++.h>
using namespace std;

int main(){

    int cup, rate;
    cin >> cup >> rate;

    int exchangecup, temp, total = 0;
    total +=  cup;

    exchangecup = cup / rate;


    while (exchangecup != 1)
    {
        total += exchangecup;
        temp = cup % rate;
        exchangecup = (exchangecup + temp) / rate;
    }

    cout << total + 1;
    
    


    return 0;
}