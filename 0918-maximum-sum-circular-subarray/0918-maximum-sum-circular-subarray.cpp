class Solution {
public:
    int kadan(vector<int>& num)
    {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<num.size();i++)
        {
            sum+=num[i];

            if(sum>maxi)
            maxi=sum;

            if(sum<0)
            sum=0;
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int x=kadan(nums);
        int y=0;
        for(int i=0;i<nums.size();i++)
        {
            y+=nums[i];
            nums[i]*=-1;
        }
        int z=kadan(nums);
        if(y+z==0)
        return x;
        return max(x,y+z);
    }
};