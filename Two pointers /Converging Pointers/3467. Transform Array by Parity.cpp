// iss problem ko solve krrne ke liye 2 approaches hai
// ek jyada readable hai aur clean hai , Lekin O(2n) time complexity 
// dusri kam readability aur cleanliness ke saath , lekin O(n) time complexity 


// APPROACH 1 🐢 , do what the problem asks us to do 

      |
      |
      |
    \ | /
     \ /
      v
        
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {


      
        for(int i = 0 ; i < nums.size() ; i++){
            nums[i] %= 2; // if else ke bajae direct likh sakte hai, jyada better approach hai 
        }
        sort(nums.begin() , nums.end());
        return nums;

      
    }
};




// APPROACH 2 🐇 ,
// using converging pointers , exactly do hi values hai jinse replace maarna hai 0 aur 1 
// toh kyu na ek ko start mein rakh le aur dusre ko end pe , bss 

      |
      |
      |
    \ | /
     \ /
      v


class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {


      
        int i = 0 , j = nums.size() -1;
        
        while(i <= j){
            if(nums[i] % 2 == 0){
                nums[i++] = 0;
            }
            else{
                swap(nums[i] , nums[j]);
                nums[j--] = 1;
            }
        }
        
        return nums;

      
    }
};      
