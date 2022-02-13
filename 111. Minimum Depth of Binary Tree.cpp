class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        else if (root->left == nullptr && root->right != nullptr)
            return 1 + minDepth(root->right);
        else if (root->left != nullptr && root->right == nullptr)
            return 1 + minDepth(root->left);
        else
            return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};