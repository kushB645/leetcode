class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0||s.size()==1)
        return true;
        int i=0;
        int j=s.size()-1;
        while(i<j){
        //isalnum check the if string has any special character
        while(i<j && !isalnum(s[i])) i++;
        
        while(i<j && !isalnum(s[j])) j--;
        
        if(tolower(s[i])!=tolower(s[j]))
        {
            return false;
           
        }
        i++;
        j--;
        }
         return true;
    }
};