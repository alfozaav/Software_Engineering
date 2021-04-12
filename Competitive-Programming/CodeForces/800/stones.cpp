#include <bits/stdc++.h>

using namespace std;

int main() {
    int s;
    cin >> s;
    string colors;
    cin >> colors;
    int counter = 0;

    for ( int i = 0; i < colors.size(); i++ ) {
        if ( colors[i] == 'R' && colors[i + 1] == 'R') {
            counter += 1;
        } else if ( colors[i] == 'B' && colors[i + 1] == 'B') {
            counter += 1;
        } else if ( colors[i] == 'G' && colors[i + 1] == 'G') {
            counter += 1;
        }
    }
    
    cout << counter << endl;
}