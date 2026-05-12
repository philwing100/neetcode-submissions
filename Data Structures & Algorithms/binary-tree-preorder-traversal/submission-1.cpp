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
    vector<int> res;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr) return res;

        std::deque<TreeNode*> st;
        st.push_back(root);

        while (!st.empty()) {
            TreeNode* node = st.back();
            st.pop_back();
            res.push_back(node->val);

            // push right first, then left
            if (node->right) st.push_back(node->right);
            if (node->left)  st.push_back(node->left);
        }

        return res;
    }
    
};