//  Bubble Sort Algorithm
#include <iostream>
#include <vector>
using namespace std;

//  Function that prints a vector
void printVector(vector<int> arr) {
    for ( int i = 0; i != arr.size(); i++ ) {
        cout << arr[i];
    }
    cout << endl;
}

//  Funtion that sorts vector using Bubble Sort
void bubbleSort(vector<int> arr) {
    int lenght = arr.size();
    int pass, temp = 0;

    for ( int i = 0; i != lenght; i++ ) {
        for ( int j = i+1; j!= lenght; j++ ) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        pass++;
    }
    cout << "Bubble Sorted Vector:" << endl;
    printVector(arr);
    cout << "It costed " << pass << " steps!" << endl;
}

int main() {
    vector<int> ivec = {8,5,2,9,5,6,3};
    cout << "Vector:" << endl;
    printVector(ivec);
    bubbleSort(ivec);
    return 0;
}