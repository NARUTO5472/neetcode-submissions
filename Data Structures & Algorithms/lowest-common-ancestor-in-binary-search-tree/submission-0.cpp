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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int parentvalue = root->val;
        int pVal = p->val;
        int qVal = q->val;

        if(pVal> parentvalue && qVal> parentvalue)
        {
            return lowestCommonAncestor(root->right, p, q);
        }

        if(pVal < parentvalue && qVal < parentvalue)
        {
            return lowestCommonAncestor(root->left, p, q);
        }

        else{
            return root;
        }
    }
};
