#include <bits/stdc++.h>

using namespace std;

int main() {
    string p;
    cin >> p;

    bool state = false;

    for ( int i = 0; i < p.length(); i++ ) {
        if ( p[i] >= 33 && p[i] <= 126 ) {
            if( p[i] == 'H' || p[i] == 'Q' || p[i] == '9' ) state = true;
        }
    }

    if ( state ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}