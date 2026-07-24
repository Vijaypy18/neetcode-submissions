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
    int height(TreeNode* root){
        if(root==NULL)
        {
            return 0;
        }
        int leftAns=height(root->left);
        int rightAns=height(root->right);
        return 1+max(leftAns,rightAns);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int lH=height(root->left);
        int rH=height(root->right);
        int absDiff=abs(lH-rH);
        bool diff=(absDiff<=1);
        bool leftans=isBalanced(root->left);
        bool rightans=isBalanced(root->right);
        if(diff && leftans && rightans){
            return true;
        }
        else{
            return false;
        }
    }
};
