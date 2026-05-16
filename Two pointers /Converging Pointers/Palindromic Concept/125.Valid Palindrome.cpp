class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0;
        int j = s.size();
        
        while(i < j){
            
            
            // Selecting feasible i
            
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            
            
            // Selecting feasible j
            
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            
            // Comparison 
            
            if(tolower(s[i]) == tolower (s[j])){
                i++ ; 
                j-- ;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};