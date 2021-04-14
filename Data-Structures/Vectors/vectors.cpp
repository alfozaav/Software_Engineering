#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec = {1,2,3,4}; // vector of type int
    // vector<Sales_item> Salaes_vec; // vector of Sales_items
    // vector<vector<string>> file;  // vector whose elements are vectors
    // vector<int> ivec2(ivec); // copy of ivec
    // vector<int> ivec2 = ivec; // copy of ivec
    vector<int> ivec2(10, -1); // 10 times -1;

    //  Operations
    ivec.empty(); // true if is empty;
    ivec.size(); // Number of elements
    ivec2.push_back(3); // adds an element to the end of evec2
    ivec.clear(); // Delete all elements from a vector
    ivec.erase(2); // Deletes element in index 2 from vector

    //  Iterators
    auto b = ivec.begin(), e = ivec.end(); // First and last element of the vector
    *iter; // Returns a reference to the element denoted
    ++iter;
    --iter;
    iter->mem // Deferences iter and fetches the member named mem from the underlying element. Equivalent to (*iter).mem

    return 0;
}