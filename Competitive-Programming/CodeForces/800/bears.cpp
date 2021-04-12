#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int year;

    if ( a == 1 && b == 1 ) year = 1;
    else {
        for ( int i = 0; a <= b; i++) {
            a = a * 3;
            b = b * 2;
            year++;
        }
    }
        

    cout << year << endl;
}