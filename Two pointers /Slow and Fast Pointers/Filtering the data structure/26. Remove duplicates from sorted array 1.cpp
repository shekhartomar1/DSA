class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


      
        int n = nums.size();
        int l = 1 ,r = 1;
        
        while(r<n){
            if(nums[r] != nums[l-1]){
                swap(nums[l] , nums[r]);
                l++;
            }
            r++;
        }
        
        return l;


      
    }
};
