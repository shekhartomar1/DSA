// ye proble exactly target krrti hai sequence genration in place pattern ko

// MISTAKES I MADE -
//                  1. my code assumes that the length group will be single 
//                  2. different method of addition of the generated numbers is what was required


class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int w = 0; 
        int i = 0; 

        while (i < n) {
            int j = i;
            
            // Jab tak same characters mil rahe hain, aage badho
            while (j < n && chars[j] == chars[i]) {
                j++;
            }
            
            // 1.sabse pehle character likhna 
            chars[w++] = chars[i];
            
            // 2. phir agar count 1 se bada hai toh usko likhna 
            int count = j - i;
            if (count > 1) {
                string countStr = to_string(count);
                for (char ch : countStr) {
                    chars[w++] = ch;
                }
            }
            
            // agla group start krrne ke liye
            i = j;
        }
        
        return w;
    }
};
