#include <iostream>
#include <math.h>

using namespace std;

int ans(int n) {
    double x;
    int k;

    for ( k = 2; k<=32; k++ ) {
        x = n / (pow(2, k) - 1);
        if ( x == (int)x ) { // posible solution
            int sum = 0;
            int j = 1;
            for ( int t = 1; t <= k; t++ ) {
                sum += j * x;
                j *= 2;
            }
            if ( sum == n ) break;
        }
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    int n;

    for ( int i = 1; i <= t; i++ ) {
        cin >> n;
        cout << ans(n) << endl;
    }
}