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
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

                    3 (1+max(l,r)ie 2)
                   / \
(1+max(l,r)ie 0)  9   20 (1+max(l,r)ie 1)
                      / \
  (1+max(l,r)ie 1)  15   7 (1+max(l,r)ie 0)