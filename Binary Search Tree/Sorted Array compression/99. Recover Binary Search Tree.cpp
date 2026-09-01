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
    TreeNode* prev = nullptr;
    TreeNode* a1,*a2,*b1,*b2;
    int count = 0;
    void fun(TreeNode* node){
        if(!node) return;
        fun(node->left);
        if(prev == nullptr) prev = node;
        else{
            if(count == 0){
                if(node->val <= prev->val){
                    a1 = prev;
                    a2 = node;
                    count++;
                }
            }
            else{
                if(node->val <= prev->val){
                    // b1 = prev;
                    b2 = node;
                    count++;
                }
            }
            prev = node;
        }
        fun(node->right);
    }
    void recoverTree(TreeNode* root) {
        fun(root);
        if(count==1) swap(a1->val , a2->val);
        else swap(a1->val , b2->val);
    }
};
