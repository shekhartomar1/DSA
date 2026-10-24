jab bhi array mein kini do values se maximum subarray nikalna ho jinka count same ho toh
classify krro 
Type A -> +1
Type B -> -1
ek hashmao maintain krro purani values ka record rakhne ke liye 
jab bhi prefix sum same mile unke beech ka difference calculate krrdo
hashmap mein 0 ko push krrna nhi bhulna hai , 0 se starting subarray track hoga !!


जब भी दो types की count equal रखनी हो — Type A को +1, Type B को -1 करो। 
Prefix sum चलाओ, hashmap में पहली बार देखी गई index store करो।
Same prefix sum दोबारा मिले तो j - m[prefSum] = length।
map[0] = -1 मत भूलो।

question agar do types ke values ke equal count ka maxlength subarray nikalne ke liye bole toh 
mujhe prefix sum aur hashmap ka use krrna hai .
krrne ke liye 
Type A -> +1 
Type B -> -1

hashmap initialization
1. mp[0] = -1;
2. nayi value dikhne prr push krro 
3. already present value se length nikalke check lagao , aur maximum store krrlo 



problems to practice 
1. 525
2. 
