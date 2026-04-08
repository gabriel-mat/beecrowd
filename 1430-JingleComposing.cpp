#include <bits/stdc++.h>

using namespace std;

double value(char c){
    double result = 1;

    switch(c){
        case 'W': return result;
        case 'H': return result / 2;
        case 'Q': return result / 4;
        case 'E': return result / 8;
        case 'S': return result / 16;
        case 'T': return result / 32;
        case 'X': return result / 64;
    }

    return 0;
}

int main(){
    int total;
    double counter;
    string line;

    while(getline(cin, line) && line != "*"){
        counter = total = 0;

        for(char c : line){
            if(c == '/'){
                total += (counter == 1);
                counter = 0;
                continue;
            }

            counter += value(c);
        }

        cout << total << endl;
    }

    return 0;
}
