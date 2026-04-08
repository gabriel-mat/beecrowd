#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, n;
    vector<int> even;
    vector<int> odd;
    
    cin >> num;

    while(num--){
        cin >> n;

        if(n % 2)
            odd.push_back(n);
        else
            even.push_back(n);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<>{});

    for(int e : even)
        cout << e << "\n";
    for(int o : odd)
        cout << o << "\n";

    return 0;
}
