#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumCloset(vector<int>& nums, int target) {
        
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