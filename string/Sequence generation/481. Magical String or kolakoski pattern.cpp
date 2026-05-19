// iss problem mein pointers ka use hotA HAI , issko READ WRITE POINTERS ki category mein daal sakte hai ,, iss category mein exactly ham ek pointer se read krrte hai 
// aur dusre se write.

// ye kolakoski sequence ke upar based ek problem hai , jha string -----> frequence of characters -----> string itself
// ye sequence generation pattern mein include kiya gya hai , kyoki previous data btata hai next value kya aaegi !!


class Solution {
public:
    int magicalString(int n) {
        if(n == 0) return 0;
        if(n <= 3) return 1;
        vector<int> v ={1,2,2};
        int left = 2;
        int count = 1;

        while(v.size() < n){
            int m = v[left];
            int new_num = v.back() == 2? 1: 2;

            while(m--){
                v.push_back(new_num);
                if(new_num == 1 && v.size() <= n) count++;
            }
            left++;
        }
        return count;
    }
};
