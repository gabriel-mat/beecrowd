#include <bits/stdc++.h>

using namespace std;

int main(){
    int num_days, day_cost;
    int current_profit, max_profit, revenue;

    while(cin >> num_days){
        cin >> day_cost;

        current_profit = max_profit = 0;

        while(num_days--){
            cin >> revenue;
            current_profit = max(0, current_profit + revenue - day_cost);
            max_profit = max(max_profit, current_profit);
        }

        cout << max_profit << endl;
    }

    return 0;
}
