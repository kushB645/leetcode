class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        int len=0;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                while(s[i]==s[i+1] && i<j)
                {
                    i++;
                }
                while(s[j]==s[j-1] && i<j)
                {
                    j--;
                }
            }
            else{
                len=j-i+1;
                break;
            }
            i++;
            j--;
        }
        len=j-i+1;
        if(len<0) return 0;
        return len;
    }
};