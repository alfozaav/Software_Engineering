//  Find the smallest element in an array

#include <iostream>
#include <vector>

using namespace std;

int findSmallestIndex( vector<int>& arr );

int main() {
    //  Selection Sort
    int arrL;
    int n, smallest;
    vector<int> ivec;
    vector<int> newArr;

    //  Fill Array
    cout << "How many items does tha array have?" << endl;
    cin >> arrL;

    for ( int i = 0; i < arrL; i++ ) {
        cin >> n;
        ivec.push_back(n);
    }

   smallest = findSmallestIndex(ivec);
   newArr.push_back(ivec[smallest]);

    //  Print New Array
    for ( auto n: newArr) 
        cout << "The smallest element is: " << n;

    cout << endl;

    return 0;
}

int findSmallestIndex( vector<int>& arr ) {
    int smallest = arr[0];
    int smallest_index = 0;

    for ( int i = 1; i < arr.size(); i++ ) {
        if ( arr[i] < smallest ) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

//  ranged based loops
// for ( int n : arr )
// for (auto n : arr)
// every n element on array arr