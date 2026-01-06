class Solution {
public:
    void levelSum(queue<TreeNode*> q, int& level, int maxi, int i) {

        if (q.empty()) return;

        queue<TreeNode*> order;
        int sum = 0;

        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            sum += curr->val;

            if (curr->left != nullptr) {
                order.push(curr->left);
            }
            if (curr->right != nullptr) {
                order.push(curr->right);
            }
        }

        if (sum > maxi) level = i;

        levelSum(order, level, max(sum, maxi), i + 1);
    }

    int maxLevelSum(TreeNode* root) {
        int level = 0;
        queue<TreeNode*> q;
        q.push(root);
        levelSum(q, level, INT_MIN, 1);
        return level;
    }
};
