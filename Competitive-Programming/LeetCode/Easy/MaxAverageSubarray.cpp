// Maximum Average Subarray 1
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   double findMaxAverage(vector<int>& nums, int k) {
      int sum = 0;
      for (int i = 0; i < k; i++) sum += nums[i];
      double maxi = sum;
      for (int i = k; i < nums.size(); i++) {
         sum += nums[i] - nums[i - k];
         if (sum > maxi) maxi = sum;
      }
      return maxi / k;
   }
};

int main(){
   Solution ob;
   vector<int> v = {1,13,-5,-8,48,3};
   cout << (ob.findMaxAverage(v, 4));
   return 0;
}