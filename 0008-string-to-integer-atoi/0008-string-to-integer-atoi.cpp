class Solution {
public:
    int myAtoi(string s) {
        // isgigit(0-9) pass true if its no.take only 1 input
        long long ans = 0;
        int n = s.size();
        int sign =1;
        int i = 0;
        while (i < n && s[i] == ' ')
            i++;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');
            if (ans * sign > INT_MAX) return INT_MAX;
            if (ans * sign < INT_MIN) return INT_MIN;
            i++;
        }
        return ans * sign;
    }
};