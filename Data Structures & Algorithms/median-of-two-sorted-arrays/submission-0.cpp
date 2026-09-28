class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto v: nums2) {
            nums1.push_back(v);
        }
        
        double result = 0;
        sort(nums1.begin(), nums1.end());

        int n = nums1.size();
        if (n % 2 == 0) {
            int mid = n/2;
            double ans = (double)((nums1[mid] + nums1[mid-1]) / 2.0);
            return ans;
        }
        result = (double)(nums1[n/2]);
        return result;
    }
};