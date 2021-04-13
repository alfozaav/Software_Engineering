#include <iostream>
#include <vector>

using namespace std;

// Fn Declarations
int maxSubArray( vector<int>&nums );

//  Constants

int main() {
    vector<int> nums;
    int n, arrl;

    cout << "How many items will you pass?" << endl;
    cin >> arrl;
    cout << "Pass " << arrl << " items please!" << endl;

    for ( int i = 0; i < arrl; i++ ) {
        cin >> n;
        nums.push_back(n);
    }

    maxSubArray(nums);
}

//  Fn Definitions

int maxSubArray( vector<int>& nums ) {
    int cSum = nums[0], tSum = nums[0];

    for ( int i = 1; i < nums.size(); i++ ) {
        cSum = max(nums[i], cSum + nums[i]);
        tSum = max(tSum, cSum); //max evalua dos valores y retorna el mayot
    }

    cout << "The answer is: " << tSum << endl;
    return tSum;
}