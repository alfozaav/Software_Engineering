#include <bits/stdc++.h>

using namespace std;

int main () {
 string in;
 cin >> in;

 string l;
 string o;

    for ( int i = 0; i < in.length(); i++ ) {
        l.push_back(tolower(in[i]));
    }

    for ( int i = 0; i < l.length(); i++ ) {
        if ( l[i] == 'a' || l[i] == 'o' || l[i] == 'y' || l[i] == 'e' || l[i] == 'u' || l[i] == 'i' ) continue;
        else {
            o.push_back('.');
            o.push_back(l[i]);
        }
    } 

    cout << o << endl;
}