class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (true) {
            // Go to the leftmost node
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }

            // Get the next smallest element
            curr = st.top();
            st.pop();

            k--;

            if (k == 0) {
                return curr->val;
            }

            // Move to the right subtree
            curr = curr->right;
        }
    }
};