/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//  EXACT SAME AS 530
class Solution {
public:
    int minDiff = INT_MAX;
    TreeNode* prev = nullptr;
    void fun(TreeNode* node){
        if(node== nullptr) return;

        fun(node->left);

        if(prev != nullptr){
            minDiff = min( node->val - prev->val , minDiff);
        }
        prev = node;
        
        fun(node->right);
    }
    int minDiffInBST(TreeNode* root) {
        fun(root);
        return minDiff;
    }
};
