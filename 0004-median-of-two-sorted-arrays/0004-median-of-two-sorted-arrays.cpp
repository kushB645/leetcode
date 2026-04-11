class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        vector<int> a = nums1;
        a.insert(a.end(), nums2.begin(), nums2.end());
        sort(a.begin(),a.end());
        int n = a.size();
        if (n % 2 != 0) {
            return a[n/2];
        }
        else{
            return (a[(n/2-1)]+a[n/2])/2.0;
        }
        return -1;
    }
};