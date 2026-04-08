class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int low=0;
        int high=nums.size();
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid+1] && nums[mid-1]<nums[mid])
            return mid;

            else if(nums[mid]<nums[mid+1])
            low=mid+1;

            else{
                high=mid-1;
            }
        }
        return low;
    }
};