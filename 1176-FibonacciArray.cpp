#include <bits/stdc++.h>

using namespace std;

vector<long int> fib(61, -1);

long int calc_fib(int n){
    if(fib[n] != -1)
        return fib[n];

    return (fib[n] = calc_fib(n - 1) + calc_fib(n - 2));
}

int main(){
    int test_cases, num;

    cin >> test_cases;

    fib[0] = 0;
    fib[1] = 1;

    while(test_cases--){
        cin >> num;
        printf("Fib(%d) = %ld\n", num, calc_fib(num));
    }

    return 0;
}
