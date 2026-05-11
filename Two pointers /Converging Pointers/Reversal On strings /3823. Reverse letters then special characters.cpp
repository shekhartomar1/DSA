// iss problem mein ek baar letters ko reverse krrdo phirr ek baar special characters ko simple hai

class Solution {
public:

    void reverseAlphabets(string &s){
        int l = 0;
        int r = s.size() -1;
        
        while(l<r){
            while(l < r && !isalpha(s[l])) l++;
            while(l < r && !isalpha(s[r])) r--;
            
            if(l<r) swap(s[l] , s[r]);
            l++, r--;
        }
    }
    
    void reverseSpecialChar(string &s){
        int l = 0;
        int r = s.size() -1;
        
        while(l<r){
            while(l < r && isalpha(s[l])) l++;
            while(l < r && isalpha(s[r])) r--;
            
            if(l<r) swap(s[l] , s[r]);
            l++, r--;
        }
    }
    
    
    string reverseByType(string s) {
        reverseAlphabets(s);
        reverseSpecialChar(s);
        return s ;
    }
};
