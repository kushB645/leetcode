class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int count=0;
        int mul=1;
        for(int j=0;j<nums.size();j++)
        {
            if(k<=1)
            return 0;
            
            mul*=nums[j];
            
            while(mul>=k)
            {
                mul/=nums[i];
                i++; 
            }
            count+=j-i+1;
        }
        return count;
    }
};