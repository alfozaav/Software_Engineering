#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> test;

    for ( int i = 0; i < s.size(); i++ ) {
        if ( s[i] == '1' ) test.push_back('1');
        else if ( s[i] == '2' ) test.push_back('2');
        else if ( s[i] == '3' ) test.push_back('3');
    }
    sort(test.begin(), test.end());

    string s2;
    for ( int i = 0; i < test.size(); i++ ) {
        s2 += test[i];
        if ( i != test.size() - 1 ) s2 += '+';
    }

    cout << s2 << endl;
}