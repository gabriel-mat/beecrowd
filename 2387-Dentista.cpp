#include <bits/stdc++.h>

using namespace std;

    int main (){
        int queries, counter = 1;
        int start, end, prevEnd;
            
        cin >> queries;

        cin >> start >> end;
        prevEnd = end;

        while(queries-- > 1){
            cin >> start >> end;

            if(start < prevEnd)
                prevEnd = min(prevEnd, end);
            else{
                counter++;
                prevEnd = end;
            }
        }

        cout << counter << endl;
    }
