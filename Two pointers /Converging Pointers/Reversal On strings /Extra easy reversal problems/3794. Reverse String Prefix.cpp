// same hi hai ek given k hai usko reverse maarna hai


class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin() , s.begin() + k);
        return s;
    }
};
