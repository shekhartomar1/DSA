class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {


      
        int i = 0;
        int j = 0;

        for(; j < nums.size() ; j++){
            if(nums[j] % 2 == 0){
                swap(nums[j] , nums[i]);
                i++;
            }
        }
        return nums;



      
    }
};
