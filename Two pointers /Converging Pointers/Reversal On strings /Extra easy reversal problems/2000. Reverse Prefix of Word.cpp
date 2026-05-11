// find krrke reverse maar do 


class Solution {
public:
    string reversePrefix(string word, char ch) {
        int k = 0;
        
        while(k < word.size() && word[k] != ch) k++;
        if(k == word.size() ) return word;
        
        reverse(word.begin() , word.begin() + k+1);
        return word;
    }
};
