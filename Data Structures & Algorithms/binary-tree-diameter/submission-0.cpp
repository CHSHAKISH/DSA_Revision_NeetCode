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
    int diameter = 0;
    int heightOfBinaryTree(TreeNode* root){

        if(root == NULL) return 0;

        int leftHt =  heightOfBinaryTree(root->left);
        int rightHt = heightOfBinaryTree(root->right);

        diameter = max(diameter, leftHt + rightHt);

        return max(leftHt, rightHt) + 1;
    
    }

    int diameterOfBinaryTree(TreeNode* root) {

        if(root == NULL) return 0;

        heightOfBinaryTree(root);

        return diameter;
        
    }
};
