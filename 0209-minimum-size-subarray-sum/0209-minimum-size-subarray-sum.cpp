class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX;
        int i=0;
        int sum=0;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
            while(sum>=target)
            {
                int len=j-i+1;
                mini=min(mini,len);
                sum-=nums[i];
                i++;
            }
        }
        if(mini==INT_MAX)return 0;
        return mini;
    }
};