#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> result;
        int i=0, j=0;

        while(i<m && j<n){

          if(nums1[i]<=nums2[j]){
            result.push_back(nums1[i]);
            i++;
          }
          else{
            result.push_back(nums2[j]);
            j++;
          }

        }

        if(i==m){
          while(j<n){
            result.push_back(nums2[j]);
            j++;
          }
        }

        if(j==n){
          while(i<m){
            result.push_back(nums1[i]);
            i++;
          }
        }
        
        nums1.clear();
        nums1 = result;
    }
};

int main() {
  vector<int> nums1 = {1};
  vector<int> nums2 = {};

  int m = 1;
  int n = 0;

  Solution obj;

  obj.merge(nums1, m, nums2, n);

  for(auto x: nums1){
    cout<<x<<" ";
  }
  return 0;
}