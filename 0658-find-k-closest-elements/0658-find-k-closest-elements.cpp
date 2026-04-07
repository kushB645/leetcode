class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0;
        int high = arr.size() - 1;
        vector<int> ans;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        int l = high;
        int r = low;

        while (k > 0) {
            if (l < 0) {
                r++;
                k--;
                continue;
            }

            if (r >= arr.size()) {
                l--;
                k--;
                continue;
            }
            if (abs(arr[l] - x) <= abs(arr[r] - x)) {
                l--;
            } else {
                r++;
            }
            k--;
        }
        for (int i = l + 1; i < r; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};