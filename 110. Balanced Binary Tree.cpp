class Solution
{
    int balance(TreeNode *node)
    {
        if (!node)
        {
            return 0;
        }
        int lh = balance(node->left);
        int rh = balance(node->right);
        if (lh == -1 || rh == -1) 
        // if either of them is -1, we dont have to go further and just return -1
            return -1;
        if (abs(lh - rh) > 1) 
        // abs() gives us the absolute difference of the two heights
            return -1;
        return max(lh, rh) + 1;
    }
public:
    bool isBalanced(TreeNode *root)
    {
        return (balance(root) != -1); 
        // if the tree is balanced it`ll be positive(true) or else it`ll be definitely negative(false).
    }
};


// Input: root = [3,9,20,null,null,15,7]
// Output: true

          3
         / \
        9   20
           /  \
          15   7