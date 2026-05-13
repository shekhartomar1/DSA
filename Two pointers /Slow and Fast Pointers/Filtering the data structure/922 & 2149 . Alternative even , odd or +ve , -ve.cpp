// ye dono problem exactly same pattern follow krrti hai aur same solution method bhi.
// 922. Sort Array by parity 2 mein hame even index prr even value aur odd index prr odd value chahiye , isme inplace krrenge agar toh order preserve nhi rahega !
// yhi iska follow up pucha jaa sakta hai ke order preserve krro , iska order same rakhne ke liye hame extra space use krrna hoga , joki 2149 problem mein bhi use hota hai bss even ki jagah +ve aur odd ki jagah -ve .


// CODE FOR 922 👇


int i = 0 , j = 1;
int n = nums.size();
        
while(i < n && j < n){
   if(nums[i] % 2 == 0) i+= 2;
   else if( nums[j] % 2 != 0) j+= 2;
   else swap(nums[i] , nums[j]) , i+= 2 , j+=2; 
}
        
   return nums;

// ye in-place ke liye best hai , lekin order preservation ❌


// CODE FOR 2149



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int m = 0 , n = 1;
        vector<int> ans(nums.size());
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>0){
                ans[m] = nums[i];
                m+= 2;
            }
            else{
                ans[n] = nums[i];
                n+= 2;
            }
        }
        return ans;
    }
};