// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos

#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Definition for a binary tree node.
 */

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth = 0;
        // no tree
        if (!root) return 0;

        depth = 1 + max(maxDepth(root->left), maxDepth(root->right));
        return depth;
    }
};

int main() {
  Solution S;

  TreeNode *t1 = new TreeNode(3);

  cout << "1? " << S.maxDepth(t1) << endl;

  t1->left = new TreeNode(9);

  cout << "2? " << S.maxDepth(t1) << endl;
  t1->right = new TreeNode(20);

  cout << "2? " << S.maxDepth(t1) << endl;
  t1->right->left = new TreeNode(15);

  cout << "3? " << S.maxDepth(t1) << endl;
  t1->right->right = new TreeNode(7);

  cout << "3? " << S.maxDepth(t1) << endl;

  cout << "Done!" << endl;

  return 0;
}
