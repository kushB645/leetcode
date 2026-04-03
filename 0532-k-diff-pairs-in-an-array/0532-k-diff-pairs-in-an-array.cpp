class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i=0;
        int j=1;
        set<pair<int,int>>st;
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            int diff=0;
            diff=nums[j]-nums[i];
            if(diff==k)
            {
                st.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            if(diff<k)
            {
                j++;
            }
            if(diff>k)
            {
                i++;
            }
            if(i==j)
            {
                j++;
            }
        }
        return st.size();
    }
};