// ye converging two pointers ki ek classical problem hai
// isme basically sorting aur converging pointers use krrte hai
// sorting ka idea problem statement aur saath hi test cases se idea ho jaata hai


// Isko solve krtne ke do tareeke hai ek jisme ham

------------- METHOD 1 ----------------

// Hash map me frequency store krrke required number dhundte hai 
// number milne prr frequency kam krr dete hai aur calculation puri krr lete hai


------------- METHOD 2 ---------------

// CONVERGING POINTERS + SORTING 

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end());
        int l = 0,  r = skill.size() -1;
        int sum = skill[l] + skill[r];
        long long chemistry= skill[l] * skill[r];
        l++ , r--;
        
        while(l<r){
            if((skill[l] + skill[r]) == sum) chemistry += skill[l] * skill[r];
            else return -1;
            
            l++ , r--;
        }
        return chemistry;
    }
};
