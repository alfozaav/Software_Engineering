#include <bits/stdc++.h> 

using namespace std;

int main() {
    int ws;
    cin >> ws;
    string s, s2;
    vector<string> test;

    for ( int i = 0; i < ws;  i++) {
        cin >> s;
        test.push_back(s);
    }

    for ( int i = 0; i < test.size(); i++ ) {
        if ( test[i].size() <= 10 ) cout << test[i] << endl;
        else if ( test[i].size() > 10 ) {
            s2 = test[i];
            cout << s2[0] << s2.size() - 2 << s2[s2.size()-1] << endl;
        }
    }

}