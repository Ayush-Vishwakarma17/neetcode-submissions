class Solution {
public:

bool canDo(vector<int>& piles, int speed, int hs) {
    int hour = 0;
    for (auto it: piles) {
        hour += (it/speed);
        if (it % speed != 0) {
            hour++;
        }
        if (hour > hs) {
            return false;
        }
    }
    return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());

        while (l < r) {
            int mid = l+(r-l)/2;
            if (canDo(piles, mid, h)) {
                r = mid;
            } else {
                l = mid+1;
            }
        }
        return l;
    }
};