#include <iostream>
#include <cstddef>

using namespace std;

int main() {
    unsigned cnt = 42; // Not a constant expression
    constexpr unsigned sz = 42; // Constant expression
    size_t // is a type thar is guaranteed to be large enough to hold any size of any object in memory
    // Is udes for variables that model size or index in an array, also is used to represent a size in bytes wich hekps making the code portable

    //  Initialization
    int arr[10];  // Array of 10 ints
    int *parr[sz]; // Array of 42 pointers to int
    string bad[cnt]; // error: cnt is not a constant expression
    string strs[get_size()];  // ok if get_size is constexpr error otherwise
    int a1[] = {1,2,3}
    int a3[5] = {1,2,3} // {1,2,3,0,0}

    //  Char Array Initialization
    char a1[] = {´C´, ´+´, ´+´}; // List initialization, no null
    char a2[] = {´C´,´+´,´+´,´\0´}; // list initialization, explicit null
    char a3 = "C++"; // null added automatically
    const char a4[6] = "Daniel"; // error: no space for the null!

    // Operations
    // Same as Strings & Vectors

    // Obtain first and last element
    int ia[] = {0,1,2,3,4,5};
    int *beg = begin(ia);  // Points to first element of the array
    int *last = end(ia);  // Points to last element of the array

    constexpr size_t sz = 5;
    int arr[sz] = {1,2,3,4,5};
    int *ip = arr; // equivalent to int *ip = &arr[0]
    int *ip2 = ip + 4; // ip2 points to arr[4], the last element in arr

    // You can´t initialize an array as a copy of another one

    return 0;
}