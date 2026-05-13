// exactly move zeroes wali problem hai , bss zero ki jagah val ko push krrna hai 


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        
      
      
      
      
      
        int j = 0;
        
        while(j<nums.size() && nums[j] != val) j++;
        int i = j+1;
        
        for(; i < nums.size() ; i++){
            if(nums[i] != val){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
        return j;





      
    }
};
