#include <bits/stdc++.h>

using namespace std;

int main(){
    string line;

    while(getline(cin, line)){
        stack<char> stk;
        bool isCorrect = true;

        for(char c : line){
            if(c == '('){
                stk.push(c);
            }
            else if(c == ')'){
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    isCorrect = false;
                    break;
                }
            }
        }

        if(isCorrect && stk.empty())
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }

    return 0;
}
