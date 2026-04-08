#include <bits/stdc++.h>

using namespace std;

int main() {
    int test_cases;
    string linha;
    set<string> lista;

    cin >> test_cases;
    cin.ignore();

    while(test_cases--){
        getline(cin, linha);
        istringstream iss(linha);

        string item;

        while(iss >> item)
            lista.insert(item);

        set<string>::iterator it = lista.begin();
        cout << *(it++);

        while(it != lista.end())
            cout << " " << *(it++);
        cout << endl;

        lista.clear();
    }

    return 0;
}
