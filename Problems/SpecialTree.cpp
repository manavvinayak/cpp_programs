#include <iostream>
#include <vector>
#include <queue> // Include queue for BFS
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> minimun_value_added(TreeNode* root) {
    if (!root) return {}; // If the root is null, return an empty vector

    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    int k = 0;
    int a = 0, b = 0;

    while (!q.empty()) {
        int n = q.size();
        int tmp = 0;

        for (int i = 0; i < n; i++) {
            auto node = q.front();
            q.pop();
            tmp += node->val;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        if (k == 0) {
            a = tmp;
            ans.push_back(0);
        } else if (k == 1) {
            b = tmp - a;
            ans.push_back(0);
        } else {
            ans.push_back((a + (b * k)) - tmp);
        }
        k++;
    }

    return ans;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> result = minimun_value_added(root);

    cout << "Result: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
