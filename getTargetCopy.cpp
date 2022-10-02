/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    //TreeNode* traverseTree(){
    //    
    //}
    TreeNode* ans;    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned == NULL) return 0;
        if(target->val == cloned->val) ans = cloned;
        getTargetCopy(original, cloned->right, target);
        getTargetCopy(original, cloned->left, target);    
        //return cloned;
        return ans;
    }
};
