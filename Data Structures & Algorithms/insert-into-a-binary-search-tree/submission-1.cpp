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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            return new TreeNode(val);
        }
        auto res = root;

        auto bfs = [&](auto& self, TreeNode*& node)->void{
            if(node==nullptr){
                node = new TreeNode(val);
            }else if(val < node->val){
                self(self, node->left);
            }else{
                self(self, node->right);
            }
        };
        bfs(bfs, root);
        return res;
    }
};