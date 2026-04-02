class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left=0;
        int right=people.size()-1;
        int boat=0;
        int sum=0;
        sort(people.begin(),people.end());
        while(left<=right)
        {
            sum=people[left]+people[right];
            if(sum<=limit)
            {
                left++;
            }
            right--;
            boat++;
        }
        return boat;
    }
};