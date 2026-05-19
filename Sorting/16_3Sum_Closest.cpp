#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX, sum=0;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size()-2;k++){
          int i=k+1, j=nums.size()-1;
          while(i<j){
            int curr_sum = (nums[k]+nums[i]+nums[j]);

            if(curr_sum==target) return curr_sum;
            else if(abs(target-curr_sum)<diff){
              diff = abs(target-curr_sum);
              sum = curr_sum;
            }

            if(curr_sum<target) i++;
            else j--;
          }
        }
        return sum;
    }
};

int main() {
  vector<int> nums = {4,0,5,-5,3,3,0,-4,-5};
  int target = -2;

  Solution obj;

  cout<<obj.threeSumClosest(nums,target)<<endl;
  return 0;
}