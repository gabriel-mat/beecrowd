#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char, int> mp;
    bool first = true;
    string line;

    auto cmp = [](const pair<char, int> &a, const pair<char, int> &b){
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    };

    while(getline(cin, line)){
        for(char c : line)
            mp[c]++;

        vector<pair<char, int>> ans(mp.begin(), mp.end());
        sort(ans.begin(), ans.end(), cmp);

        if(!first)
            cout << endl;

        for(const auto &p : ans)
            cout << int(p.first) << " " << p.second << endl;

        first = false;
        mp.clear();
    }

    return 0;
}
