class Solution {
public:

long long ispossible(vector<int>& nums, int hours){
   long long k=0;
   long long ans=0;
   for(int i=0;i<nums.size();i++){
        ans=nums[i]/hours;
        k+=ans;
        if(nums[i]%hours!=0){
            k++;
        }
   }
   return k;
}
    int minEatingSpeed(vector<int>& nums, int h) {
        long long low=1;
        long long high=*max_element(nums.begin(),nums.end());
        long long ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long hard=ispossible(nums,mid);
            if(hard<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};