// exactly same pattern use hai read aur write wala bhot simple problem hai

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < n/2; i++){
            int freq = nums[2*i];
            int val = nums[2*i + 1];
            while(freq--) ans.push_back(val);           
        }

        return ans;
    }
};
