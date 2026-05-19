// ye problem mein bhi same sequence generation hai plus hame need nhi hai ke sabhi previous values ko store rakhe , just back wali required hai next ke liye 

//  POINTS-----
//            - string ko integer mein convert krrna hai toh to_string() ka use krro 
//            - string + char concatenation allowed hai cpp mein

class Solution {
public:
    string countAndSay(int n) {
        
        string ans = "1";

        for(int j = 1; j < n ; j++){
            string prev = ans;
            ans = "";
            int count = 1;

            int i = 1;
            for(; i < prev.size() ; i++ ){
                if(prev[i] == prev[i-1]) count++;
                else ans += to_string(count) + prev[i-1] , count = 1;
            }

            ans += to_string(count) + prev[i-1];
        }

        return ans;
    }
};
