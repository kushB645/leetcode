bool checkpalindrome(string &ans)
    {
        string revans=ans;
        reverse(revans.begin(), revans.end());
        return ans==revans;
    }
class Solution {
public:
    string longestPalindrome(string s) {
        int i=0;
        int start = 0;            
        int maxLen = 1; 
        int n=s.size();
        if (s.size() <= 1) return s;
        for(i=0;i<s.size();++i){
        int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;
                if (len > maxLen) {
                    maxLen = len;
                    start = l;
                }
                --l; ++r;
            }
            l = i; r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;
                if (len > maxLen) {
                    maxLen = len;
                    start = l;
                }
                --l; ++r;
            }
        }
        return s.substr(start, maxLen);
    }
};