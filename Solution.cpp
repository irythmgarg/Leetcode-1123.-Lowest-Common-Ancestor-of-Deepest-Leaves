// 📌 Problem: Lowest Common Ancestor of Deepest Leaves in a Binary Tree
// ✍️ Author: Ridham Garg (Thapar Institute of Engineering and Technology)
// 📧 Email: Ridhamgarg000@gmail.com

class Solution {
public:
    unordered_map<int, int> mp;  // 📦 Stores depth of each node
    int maxD = 0;  // 🔢 Tracks maximum depth encountered

    // 🔁 Helper function to compute depth of each node
    void depth(TreeNode* root, int d) {
        if (!root) return;

        maxD = max(maxD, d);         // 📈 Update max depth if needed
        mp[root->val] = d;           // 🗂️ Store depth of node

        depth(root->left, d + 1);    // ⬅️ Go left
        depth(root->right, d + 1);   // ➡️ Go right
    }

    // 🔍 Finds the LCA of nodes at maximum depth
    TreeNode* LCA(TreeNode* root) {
        if (root == NULL || mp[root->val] == maxD) {
            return root;  // ✅ Return if null or deepest node
        }

        TreeNode* l = LCA(root->left);   // 🧭 Left LCA
        TreeNode* r = LCA(root->right);  // 🧭 Right LCA

        if (l && r) return root;         // 🎯 Both found ⇒ current is LCA
        return l != NULL ? l : r;        // 🔄 Propagate non-null child
    }

    // 🚀 Main function to call depth and then LCA
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        depth(root, 0);        // Step 1: Fill depth map
        return LCA(root);      // Step 2: Get LCA of deepest leaves
    }
};
