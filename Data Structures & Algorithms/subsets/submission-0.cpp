class Solution {
public:
void solve (int i, vector<vector<int>> &result, vector<int>& nums, vector<int> curr) {

    if (i == nums.size()) {
        result.push_back(curr);
        return;
    }

      

    //take 
    curr.push_back(nums[i]);
    solve(i+1, result, nums, curr);

    //skip
    curr.pop_back();
    solve(i+1, result, nums, curr);
  

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        
        solve(0, result, nums, {});
        
        return result;
    }
};
