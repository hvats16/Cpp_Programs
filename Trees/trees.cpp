#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void preOrder(struct Node *root) {
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node *root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(struct Node *root) {
    if (root == nullptr) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

vector<vector<int>> levelOrder(struct Node *root) {
    vector<vector<int>> ans;
    if (root == nullptr) return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++) {
            Node *node = q.front();
            q.pop();
            if (node->left != nullptr) {
                q.push(node->left);
            }
            if (node->right != nullptr) {
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

vector<int> iterativePreOrder(struct Node *root) {
    vector<int> ans;
    if (root == nullptr) return ans;
    stack<Node *> st;
    st.push(root);
    while (!st.empty()) {
        root = st.top();
        st.pop();
        ans.push_back(root->data);
        // We push right first because stack is LIFO so left came out first as we push it in last.
        if (root->right != nullptr) st.push(root->right);
        if (root->left != nullptr) st.push(root->left);
    }
    return ans;
}

vector<int> iterativeInOrder(struct Node *root) {
    vector<int> ans;
    if (root == nullptr) return ans;
    stack<Node *> st;
    Node *node = root;
    while (true) {
        if (node != nullptr) {
            st.push(node);
            node = node->left;
        } else {
            if (st.empty() == true) break;
            node = st.top();
            st.pop();
            ans.push_back(node->data);
            node = node->right;
        }
    }
    return ans;
}

vector<int> iterativePostOrderUsing2Stack(struct Node *root) {
    vector<int> postOrder;
    stack<Node *> st1, st2;
    if (root == nullptr) return postOrder;
    st1.push(root);
    while (!st1.empty()) {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if (root->left != nullptr) st1.push(root->left);
        if (root->right != nullptr) st2.push(root->right);
    }
    while (!st2.empty()) {
        postOrder.push_back(st2.top()->data);
        st2.pop();
    }
    return postOrder;
}

vector<vector<int>> preInPostTraversal(struct Node *root) {
    vector<vector<int>> preInPost;
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    if (root == nullptr) return preInPost;
    stack<pair<Node *, int>> st;
    st.push({root, 1});
    while (!st.empty()) {
        auto it = st.top();
        st.pop();
        // This is the part of the preOrder
        // Increment from 1 to 2
        // Push left side of the tree
        if (it.second == 1) {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->left != nullptr) st.push({it.first->left, 1});
        }
        // This is the part of Inorder
        // Increment from 2 to 3
        // Push right side of the tree
        else if (it.second == 2) {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->right != nullptr) st.push({it.first->right, 1});
        }
        // This is the part of PostOrder
        else {
            post.push_back(it.first->data);
        }
    }
    preInPost.push_back(pre);
    preInPost.push_back(in);
    preInPost.push_back(post);

    return preInPost;
}

int maxDepth(struct Node *root) {
    if (root == nullptr) return 0;
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    return 1 + max(lh, rh);
}

// Check if tree is balanced or not
int dfsHeight(struct Node *root) {
    if (root == nullptr) return 0;
    int lh = dfsHeight(root->left);
    if (lh == -1) return -1;
    int rh = dfsHeight(root->right);
    if (rh == -1) return -1;
    if (abs(lh - rh) > 1) return -1;
    return 1 + max(lh, rh);
}
bool isBalanced(struct Node *root) {
    return dfsHeight(root) != -1;
}

// Find out the diamater of tree
int height(struct Node *root, int &diameter) {
    if (root == nullptr) return 0;
    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    diameter = max(diameter, lh + rh);
    return 1 + max(lh, rh);
}
int diamaterOfTree(struct Node *root) {
    int diameter = 0;
    height(root, diameter);
    return diameter;
}

// Binary Tree Maximum Path Sum
int maxPathSumHelper(struct Node *root, int &maxi) {
    if (root == nullptr) return 0;
    int leftSum = max(0, maxPathSumHelper(root->left, maxi));
    int rightSum = max(0, maxPathSumHelper(root->right, maxi));
    maxi = max(maxi, (leftSum + rightSum + root->data));
    return max(leftSum, rightSum) + root->data;
}
int maxPathSum(struct Node *root) {
    int maxi = INT_MIN;
    maxPathSumHelper(root, maxi);
    return maxi;
}

// Check it two trees are Identical or Not
bool isSameTree(struct Node *p, struct Node *q) {
    if (p == nullptr || q == nullptr) return p == q;
    return (p->data == q->data) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

vector<vector<int>> zigZagOrderTraversal(struct Node *root) {
    vector<vector<int>> ans;
    if (root == nullptr) return ans;
    queue<Node *> q;
    q.push(root);
    bool leftToRight = true;
    while (q.empty()) {
        int size = q.size();
        vector<int> temp;
        for (int i = 0; i < size; i++) {
            Node *node = q.front();
            q.pop();
            int index = (leftToRight) ? i : (size - i - 1);
            temp[index] = node->data;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        leftToRight = !leftToRight;
        ans.push_back(temp);
    }
}

// Boundary level traversal
bool isleaf(Node *root) {
    if (!root->left && !root->right)
        return true;
    else
        return false;
}
void addLeftBoundary(struct Node *root, vector<int> &res) {
    Node *curr = root->left;
    while (curr) {
        if (!isleaf(curr)) res.push_back(curr->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}
void addRightBoundary(struct Node *root, vector<int> &res) {
    Node *curr = root->right;
    vector<int> temp;
    while (curr) {
        if (!isleaf(curr)) temp.push_back(curr->data);
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
    for (int i = temp.size() - 1; i >= 0; i++) {
        res.push_back(temp[i]);
    }
}
void addLeaves(struct Node *root, vector<int> &res) {
    if (isleaf(root)) {
        res.push_back(root->data);
        return;
    }
    if (root->left) addLeaves(root->left, res);
    if (root->right) addLeaves(root->right, res);
}
vector<int> printBoundary(Node *root) {
    vector<int> res;
    if (!root) return res;
    if (!isleaf(root)) res.push_back(root->data);
    addLeftBoundary(root, res);
    addLeaves(root, res);
    addRightBoundary(root, res);
    return res;
}

// Vertical Order Traversal of Binary Tree

vector<vector<int>> verticalTraversal(Node *root) {
    map<int, map<int, multiset<int>>> nodes;
    queue<pair<Node *, pair<int, int>>> todo;
    todo.push({root, {0, 0}});
    while (!todo.empty()) {
        auto p = todo.front();
        todo.pop();
        Node *node = p.first;
        int x = p.second.first;
        int y = p.second.second;
        nodes[x][y].insert(node->data);
        if (node->left) todo.push({node->left, {x - 1, y + 1}});
        if (node->right) todo.push({node->right, {x + 1, y + 1}});
    }
    vector<vector<int>> ans;
    for (auto p : nodes) {
        vector<int> col;
        for (auto q : p.second) {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}

// Top view of binary tree

vector<int> topView(Node *root) {
    vector<int> ans;
    if (root == nullptr) return ans;
    map<int, int> mpp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        Node *node = it.first;
        int line = it.second;
        if (mpp.find(line) == mpp.end()) mpp[line] = node->data;
        if (node->left) q.push({node->left, line - 1});
        if (node->right) q.push({node->right, line + 1});
    }
    for (auto it : mpp) {
        ans.push_back(it.second);
    }
    return ans;
}

// Bottom view of binary tree

vector<int> bottomView(Node *root) {
    vector<int> ans;
    if (root == nullptr) return ans;
    map<int, int> mpp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        Node *node = it.first;
        int line = it.second;
        mpp[line] = node->data;
        if (node->left) q.push({node->left, line - 1});
        if (node->right) q.push({node->right, line + 1});
    }
    for (auto it : mpp) {
        ans.push_back(it.second);
    }
    return ans;
}

int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);

    vector<vector<int>> answer = preInPostTraversal(root);

    for (int i = 0; i < answer.size(); i++) {
        for (auto i : answer[i]) {
            cout << i << " ";
        }
        cout << endl;
    }
    // cout<<maxDepth(root)<<endl;
    // cout<<isBalanced(root)<<endl;
    // cout<<diamaterOfTree(root)<<endl;
    // cout<<maxPathSum(root)<<endl;
    cout << isSameTree(root, root) << endl;
    return 0;
}
