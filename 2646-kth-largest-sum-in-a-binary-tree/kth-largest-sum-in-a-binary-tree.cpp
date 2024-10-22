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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        int levels = 0;
        queue<TreeNode*> tree;
        priority_queue<long long> levelSums;
        tree.push(root);
        long long cnt = 0;
        while(!tree.empty()){
            long long levelSize = tree.size();
            levels++;
            cnt = 0;
            for(int i = 0; i < levelSize; i++){
            TreeNode* current = tree.front();
            cnt +=current->val;
            tree.pop();
             if (current->left != nullptr) {
            tree.push(current->left);
        }

        if (current->right != nullptr) {
            tree.push(current->right);
        }
        }
        levelSums.push(cnt);
        }
        if(levels<k)
            return -1;
        for(int i = 1; i <k ; i++)
            levelSums.pop();
        return levelSums.top();

    }
};