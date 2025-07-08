/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int dfs(struct TreeNode* node, int current) {
    if (node == NULL) return 0; // Base case

    current = current * 10 + node->val;

    if (node->left == NULL && node->right == NULL) return current; // Leaf condition

    int leftSum = dfs(node->left, current);
    int rightSum = dfs(node->right, current);

    return leftSum + rightSum;
}

int sumNumbers(struct TreeNode* root) {
    return dfs(root, 0);
}