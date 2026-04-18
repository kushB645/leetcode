class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(st.empty())
            ans[i]=0;

            else{
                ans[i]=st.top()-i;
            }
            st.push(i);
        }
        return ans;
    }
};