#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> result;
        int size1 = nums1.size(), size2 = nums2.size();
        int i=0, j=0;

        while(i<size1 && j<size2){
          while(nums1[i]==0) i++;
          while(nums2[j]==0) j++;

          if(nums1[i]<=nums2[j]){
            result.push_back(nums1[i]);
            i++;
          }
          else{
            result.push_back(nums2[j]);
            j++;
          }
        }

        if(i==size1-1){
          while(j<size2){
            while(nums2[j]==0) j++;
            result.push_back(nums2[j]);
            j++;
          }
        }

        if(j==size2-1){
          while(nums1[i]==0) i++;
          result.push_back(nums1[i]);
          i++;
        }
        
        int size3 = result.size();
        for(int i=0;i<size3-1;i++){
          nums1[i] = result[i]; 
        }
    }
};

int main() {
  vector<int> nums1 = {1,2,3,0,0,0};
  vector<int> nums2 = {2,5,6};

  int m = 3;
  int n = 3;

  Solution obj;

  obj.merge(nums1, m, nums2, n);

  for(auto x: nums1){
    cout<<x<<" ";
  }
  return 0;
}