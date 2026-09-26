class Solution {
public:
bool search (int s, int e, vector<int> &nums, int target) {
    while (s <= e) {
        int mid = s + (e-s)/2;
        if (nums[mid] == target) {
            return true;
        } else if (nums[mid] > target) {
            e = mid-1;
        } else {
            s = mid+1;
        }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto &v : matrix) {
            if (target >= v[0] && target <= v[v.size()-1]) {
                if (search(0, v.size()-1, v, target)) {
                    return true;
                } else {
                    return false;
                }
            }
        }
        return false;
    }
};
