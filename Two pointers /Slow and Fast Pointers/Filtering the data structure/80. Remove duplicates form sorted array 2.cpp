class Solution {
public:
    int removeDuplicates(vector<int>& nums) {



      
        int i = 0;
        int j = 0;
        
        for(; j< nums.size() ; j++){
            
            if(i == 0 || i == 1 || nums[j] != nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;



      
    }
};
