#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();k++){
            if(k==0 || nums[k]!=nums[k-1]){
                int target = -nums[k];
                int i = k+1, j = nums.size()-1;
                while(i<j){
                    int sum = nums[i]+nums[j]; 
                    if(sum==target){
                        result.push_back({nums[k],nums[i],nums[j]});

                        while(i<j && nums[i]==nums[i+1]) i++;
                        while(i<j && nums[j]==nums[j-1]) j--;

                        i++;
                        j--;
                    }
                    else if(sum<target) i++;
                    else j--; 
                }
            }
        }

        return result;
    }
};

int main() {
  vector<int> nums = {0,0,0};

  Solution obj;

  vector<vector<int>> ans = obj.threeSum(nums);
  
  for(auto v : ans){
    cout<<"[ ";
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<"]\n";
  }
  return 0;
}