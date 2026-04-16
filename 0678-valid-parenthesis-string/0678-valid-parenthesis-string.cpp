class Solution {
public:
    bool checkValidString(string s) {
        stack<char>st;
        stack <char>star;

        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(')
            st.push(i);
            else if(ch=='*')
            star.push(i);
            else{
                if(st.size()==0 && star.size()==0)
                return false;
                else if(st.size()>0)
                st.pop();
                else if(star.size()>0)
                star.pop();
            }
        }
        while(!st.empty() && !star.empty())
        {
           if(st.top()>star.top())
           return false;

           st.pop();
           star.pop();
        } 
      return st.empty();
    }
};