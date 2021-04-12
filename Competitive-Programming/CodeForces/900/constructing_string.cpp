#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    int n, a, b;
    vector <int> c;
    vector <int> cases;

    for ( int i = 0; i < t; i++ ) {
        cin >> n >> a >> b;
        c.push_back(n);
        c.push_back(a);
        c.push_back(b);
        cases.push_back(c);
    }

    for ( int i = 0; i < cases.size(); i++ ) {
        cout << cases[i];
    }
}