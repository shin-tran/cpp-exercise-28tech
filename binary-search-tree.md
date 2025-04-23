# Binary search tree

## Duyet

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct node {
  int val;
  node *left, *right;
  node (int x) {
    val = x;
    left = right = NULL;
  }
};

void makeRoot(node *root, int v, char c) {
  if (c == 'L') root->left = new node(v);
  else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c) {
  if (root == NULL) return;
  if (root->val == u) makeRoot(root, v, c);
  else {
    insertNode(root->left, u, v, c);
    insertNode(root->right, u, v, c);
  }
}

void inorder(node *root) {
  if (root != NULL) {
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
  }
}

void bfs(node *root) {
  queue<node *> q;
  q.push(root);
  while (!q.empty()) {
    node *tmp = q.front(); q.pop();
    cout << tmp->val << " ";
    if (tmp->left != NULL) q.push(tmp->left);
    if (tmp->right != NULL) q.push(tmp->right);
  }
}

int main() {
  faster();
  node *root = NULL;
  int n; cin >> n;
  for (int i = 1; i <= n; ++i) {
    int u, v; char c;
    cin >> u >> v >> c;
    if (root == NULL) {
      root = new node(u);
      makeRoot(root, v, c);
    } else insertNode(root, u, v, c);
  }
  bfs(root);
  return 0;
}
```

## Nhi phan tim kiem

```c
#include <bits/stdc++.h>

using namespace std;

struct node {
  int val;
  node *left, *right;
  node (int x) {
    val = x;
    left = right = NULL;
  }
};

int insertNode(node **root, int x) {
  if (*root != NULL) {
    if ((*root)->val == x) return 0;
    if ((*root)->val > x) return insertNode(&(*root)->left, x);
    else return insertNode(&(*root)->right, x);
  }
  *root = new node(x);
  return 1;
}

node *searchNode(node *root, int x) {
  while (root) {
    if (root->val == x) return root;
    else if (root->val > x) root = root->left;
    else root = root->right;
  }
  return NULL;
}

void inorder(node *root) {
  if (root != NULL) {
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
  }
}

int main() {
  node *root = NULL;
  insertNode(&root, 1);
  insertNode(&root, 2);
  insertNode(&root, 3);
  insertNode(&root, 4);
  inorder(root);
  node *res = searchNode(root, 5);
  if (res) cout << res->val;
  else cout << "NO";
  return 0;
}
```
