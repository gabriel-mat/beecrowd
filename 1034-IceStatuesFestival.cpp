#include <bits/stdc++.h>

#define INF 1e9

using namespace std;

int main(){
    int test_cases;
    int num_blocks, size;
    vector<int> memo(1e6 + 1);

    memo[0] = 0;
    cin >> test_cases;

    while(test_cases--){
        cin >> num_blocks >> size;
    
        fill(memo.begin() + 1, memo.begin() + size + 1, INF);

        vector<int> blocks(num_blocks);

        for(int i = 0; i < num_blocks; ++i)
            cin >> blocks[i];

        for(int i = 1; i <= size; ++i){
            for(int block : blocks){
                if(i >= block)
                    memo[i] = min(memo[i], memo[i - block] + 1);
            }
        }

        cout << memo[size] << endl;
    }

    return 0;
}
