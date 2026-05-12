/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     constructor(val = 0, left = null, right = null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    /**
     * @param {TreeNode} root
     * @return {TreeNode}
     */
    invertTree(root) {
        if(root == null) return null;
        const queue = new Queue([root]);
        let node = queue.pop();
        let temp = node.left;
        node.left = node.right;
        node.right = temp;
        this.invertTree(node.left);
        this.invertTree(node.right);
        return root;
    }
}
