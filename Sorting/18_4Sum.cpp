#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define all(v) v.begin(), v.end()
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a; i<b; i++)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        

        return result;
    }
};

int main() {
  vector<int> nums = {1,0,-1,0,-2,2};
  int target = 0;
  Solution obj;

  vector<vector<int>> ans = obj.threeSum(nums, target);
  
  for(auto v : ans){
    cout<<"[ ";
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<"]\n";
  }
  return 0;
}