//  Find the nth fibonacci number from a int given
#include <iostream>
#include <vector>

using namespace std;

int nthFibonacci( int n ) {
    vector<int> ivec = {0,1};
    int result;

    if ( n <= 2 ) {
        result  = ivec[n-1];
    } else {
        for ( int i = 1; i != n; i++ ) {
            result = ivec[i];
            ivec.push_back(ivec[i] + ivec[i-1]);
        }
    }
    return result;
}

int main() {
    int n = 6;
    int result = nthFibonacci(n);
    nthFibonacci(n);
    cout << "The nth Fibonacci number of " << n << " is: " << result << endl;
    return 0;
}