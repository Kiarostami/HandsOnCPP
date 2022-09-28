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
    /*
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        if(root == NULL) return 0;
        if((root->val >= low) && (root->val <= high)) sum += root->val;
        TreeNode* next = root;
        TreeNode* prev = root;
            do{
                //prev = next;
                if(next->left != NULL) 
                {
                    prev = next;
                    next = next->left;
                    if((next->val >= low) && (next->val <= high)) sum += next->val;
                }
                else if(next->right != NULL) 
                {
                    prev = next;
                    next = next->right;
                    if((next->val >= low) && (next->val <= high)) sum += next->val;
                }
                else
                {
                    next = prev->right;
                }
                //next = prev->right;
            }while((next->left != NULL) || (next->right != NULL));
        return sum;
    }
    */
    void traverseTree(TreeNode* root, int low, int high, int &sum)
    {
        if(root == NULL) return;
        if((root->val >= low) && (root->val <= high)) sum += root->val;
        traverseTree(root->left, low, high, sum);
        traverseTree(root->right, low, high, sum);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        int sum = 0;
        traverseTree(root, low, high, sum);
        return sum;
    }
};
