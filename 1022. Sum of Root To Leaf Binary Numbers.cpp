class Solution {
public:
    int binaryConvert(string x) {
        int res = 0;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == '1') res += pow(2, x.size() - 1 - i);
        }
        return res;
    }

    void inOrder(TreeNode* root, int& sum, string& binary) {
        if (root == nullptr) return;
        
        binary += ((root->val) + '0');

        if (root->left == nullptr && root->right == nullptr) {
            sum += binaryConvert(binary);
        } else {
            inOrder(root->left, sum, binary);
            inOrder(root->right, sum, binary);
        }
        binary.pop_back();
    }

    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        string binary = "";
        inOrder(root, sum, binary);
        return sum;
    }
};
