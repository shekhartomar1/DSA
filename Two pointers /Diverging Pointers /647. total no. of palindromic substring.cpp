// exactly same pattern ka use hua hai , total count chahiye bss 

class Solution {
public:
    int countSubstrings(string s) {
        if(s.size() <= 1) return s.size();
    
       
        int count = 0;
    
        for(int i = 0 ; i < s.size() ; i++){
            int l = i , r = i; 
            while((l >= 0 && r < s.size()) &&         s[l] == s[r]){
                count++;
                l--; r++;
            }
        
            l = i ; r = i + 1;
            while((l >= 0 && r < s.size()) && s[l] == s[r]){
                count++;
                l--; r++;
            }
        }
    
        return count;
    }
};