class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C" && !st.empty())
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                int a=st.top();
                a=a*2;
                st.push(a);
            }
            else if(operations[i]=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                int sum=a+b;
                st.push(a);
                st.push(sum);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};