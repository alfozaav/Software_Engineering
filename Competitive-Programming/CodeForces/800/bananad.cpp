#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int suma = 0;
    int total = 0;

    for ( int i = 0; i < w; i++ ) {
        suma = k + ( k * i );
        total = total + suma;
    }

    int prestamo;
    if ( n >= total ) prestamo = 0;
    else prestamo = total - n;
    cout << prestamo << endl;
}
