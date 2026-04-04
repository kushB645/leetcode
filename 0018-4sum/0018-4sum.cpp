class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int a=0;a<nums.size();a++)
        {
            if(a>0 && nums[a]==nums[a-1])
            continue;

            for(int b=a+1;b<nums.size();b++)
            {
                if(b>a+1 && nums[b]==nums[b-1])
                continue;

                int c=b+1;
                int d=nums.size()-1;

                while(c<d)
                {
                    long long sum=(long long )nums[a]+nums[b]+nums[c]+nums[d];
                    if(sum==target){
                    ans.push_back({nums[a],nums[b],nums[c],nums[d]});
                    c++;
                    d--;

                    while(c<d && nums[c]==nums[c-1]){
                    c++;
                    }
                    while(c<d && nums[d]==nums[d+1]){
                    d--;
                    }
                    }
                    else if(sum<target)
                    c++;

                    else
                    d--;
                }
            }
        }
        return ans;
    }
};