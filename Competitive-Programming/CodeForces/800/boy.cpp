#include <bits/stdc++.h>

using namespace std;

int main () {
    string s;
    cin >> s;
    // int counter;
    // set<char> s2;
    set <char>s2 ( begin( s ) , end( s ) );

    // for ( int i = 0; i < s.size(); i++ ) {
    //     s2.insert(s[i]);
    // }
    // counter = s2.size();

    if ( s2.size() % 2 == 0 ) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}
