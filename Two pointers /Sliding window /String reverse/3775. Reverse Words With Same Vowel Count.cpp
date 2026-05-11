// iss problem mein ham words ki condition satisfy krke reverse krrte ha

class Solution {
public:
    string reverseWords(string s) {
        int r = 0 , c1 = 0 , n = s.size();
        string vowels = "aeiou";
        
        while(r<n && s[r] != ' '){
            if(vowels.contains(s[r])) c1++;
            r++;
        }
        
      
        
        while(r < n){
            r++;
            int l = r;
            int c2 = 0;
            
            while(r < n && s[r] != ' '){
                if(vowels.contains(s[r])) c2++;
                r++;
            }
            
            if(l<r && c1 == c2){
                reverse(s.begin() + l , s.begin() + r);
            }
        }
        
        return s;
    }
};
