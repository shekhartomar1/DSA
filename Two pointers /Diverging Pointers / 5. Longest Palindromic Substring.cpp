class Solution {
public:
    string longestPalindrome(string s) {
    if (s.empty()) return "";
    
// yha odd length ki palindromic substring ke liye check krr rahe hai 
    int start = 0, end = 0; 
    
    for(int i = 0 ; i < s.size() ; i++){
        int l = i , r = i; 
        while((l >= 0 && r < s.size()) && s[l] == s[r]){
            if(r - l > end - start) {
                start = l;
                end = r;
            }
            l--; r++;
        }
       
// yha even length ki palindromic substring ke liye check krr rahe hai 
        l = i ; r = i + 1;
        while((l >= 0 && r < s.size()) && s[l] == s[r]){
            if(r - l > end - start) {
                start = l;
                end = r;
            }
            l--; r++;
        }
    }
    
    return s.substr(start, end - start + 1);
}

};