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
    int getMinimumDifference(TreeNode* root) {
        fun(root);
        return minDiff;
    }

    // int minDiff = INT_MAX;
    // void fun(TreeNode* node){
    //     if(node->left){
    //         TreeNode* t = node->left;
    //         while(t->right) t = t->right;
    //         minDiff = min(node->val - t->val , minDiff);
    //         fun(node->left);
    //     }
    //     if(node->right){
    //         TreeNode* t = node->right;
    //         while(t->left) t = t->left;
    //         minDiff = min(t->val - node->val  , minDiff);
    //         fun(node->right);
    //     }
    // }
};
