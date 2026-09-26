class Solution {
public:
int BS(int s, int e, vector<int> &nums) {
    int mid;
    while (s < e) {
        mid = s + (e-s)/2;
        if (nums[mid] > nums[e]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}
int BS2(int s, int e, vector<int> &nums, int target) {
    while (s <= e) {
        int mid = s + (e-s)/2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            e = mid-1;
        } else {
            s = mid+1;
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int pvt = BS(0, nums.size()-1, nums);
        
        int ans = BS2(0, pvt-1, nums, target);
        if (ans != -1) {
            return ans;
        }
        return ans = BS2(pvt, nums.size()-1, nums, target);
    }
};
