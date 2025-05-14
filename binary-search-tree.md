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

## Nhị phân tìm kiếm

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

void inorder(node *root) {
  if (root) {
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
  }
}

node *searchNode (node *root, int x) {
  while (root) {
    if (root->val == x) return root;
    else if (root->val > x) root = root->left;
    else root = root->right;
  }
  return NULL;
}

node *minNode(node *root) {
  while (root != NULL && root->left != NULL) root = root->left;
  return root;
}

node *deleteNode(node *root, int x) {
  if (root == NULL) return root;
  if (root->val > x) root->left = deleteNode(root->left, x);
  else if (root->val < x) root->right = deleteNode(root->right, x);
  else {
    if (root->left == NULL) {
      node *temp = root->right;
      delete root;
      return temp;
    } else if (root->right == NULL) {
      node *temp = root->left;
      delete root;
      return temp;
    } else {
      node *temp = minNode(root->right);
      root->val = temp->val;
      root->right = deleteNode(root->right, temp->val);
    }
  }
  return root;
}

int main() {
  node *root = NULL;
  insertNode(&root, 4);
  insertNode(&root, 2);
  insertNode(&root, 6);
  inorder(root);
  cout << endl;
  deleteNode(root, 4);
  inorder(root);
  cout << endl;
  return 0;
}
```

## Kiem tra NPTK

```c
#include <bits/stdc++.h>

using namespace std;

struct node {
  int val;
  node *left, *right;
  node (int x) {
    val = x;
    left = right = nullptr;
  }
};

int insertNode(node **root, int x) {
  if (*root) {
    if ((*root)->val == x) return 0;
    if ((*root)->val > x) return insertNode(&(*root)->left, x);
    else return insertNode(&(*root)->right, x);
  }
  *root = new node(x);
  return 1;
}

void inorder(node *root) {
  if (root) {
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
  }
}

node *searchNode(node *root, int x) {
  while (root) {
    if (root->val == x) return root;
    else if (root->val > x) root = root->left;
    else root = root->right;
  }
  return nullptr;
}

node *minNode(node *root) {
  while (root != nullptr && root->left != nullptr) root = root->left;
  return root;
}

node *deleteNode(node *root, int x) {
  if (root == nullptr) return root;
  if (root->val > x) root->left = deleteNode(root->left, x);
  else if (root->val < x) root->right = deleteNode(root->right, x);
  else {
    if (root->left == nullptr) {
      node *temp = root->right;
      delete root;
      return temp;
    } else if (root->right == nullptr) {
      node *temp = root->left;
      delete root;
      return temp;
    } else {
      node *temp = minNode(root->right);
      root->val = temp->val;
      root->right = deleteNode(root->right, temp->val);
    }
  }
  return root;
}

int countAmDuong(node *root, string s) {
  if (root == nullptr) return 0;

  int duong = 0, am = 0;

  if (root->val >= 0) duong = 1;
  else am = 1;

  int leftDuong = 0, leftAm = 0, rightDuong = 0, rightAm = 0;

  if (root->left) {
    leftDuong = countAmDuong(root->left, "duong");
    leftAm = countAmDuong(root->left, "am");
  }

  if (root->right) {
    rightDuong = countAmDuong(root->right, "duong");
    rightAm = countAmDuong(root->right, "am");
  }

  duong += leftDuong + rightDuong;
  am += leftAm + rightAm;

  if (s == "duong") return duong;
  else if (s == "am") return am;
  else return 0;
}

int minDuong(node *root) {
  if (root == nullptr) return INT_MAX;

  int res = INT_MAX;

  if (root->val > 0) {
    res = root->val;
  }

  int leftMin = minDuong(root->left);
  int rightMin = minDuong(root->right);

  if (leftMin > 0) res = min(res, leftMin);
  if (rightMin > 0) res = min(res, rightMin);

  return (res == INT_MAX) ? -1 : res;
}

int tong(node *root) {
  if (root == nullptr) return 0;
  return root->val + tong(root->left) + tong(root->right);
}

int countNodes(node *root) {
  if (root == nullptr) return 0;
  return 1 + countNodes(root->left) + countNodes(root->right);
}

node *maxNode(node *root) {
  if (root == nullptr) return nullptr;
  while (root->right != nullptr)
    root = root->right;
  return root;
}

int countNodesWithOneChild(node *root) {
  if (root == nullptr) return 0;

  int count = 0;

  if ((root->left == nullptr && root->right != nullptr) ||
    (root->left != nullptr && root->right == nullptr)) {
    count = 1;
  }

  count += countNodesWithOneChild(root->left);
  count += countNodesWithOneChild(root->right);

  return count;
}

int countNodesWithTwoChildren(node *root) {
  if (root == nullptr) return 0;

  int count = 0;

  if (root->left != nullptr && root->right != nullptr) {
    count = 1;
  }

  count += countNodesWithTwoChildren(root->left);
  count += countNodesWithTwoChildren(root->right);

  return count;
}

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i < sqrt(n); ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

int countPrimeNodes(node *root) {
  if (root == nullptr) return 0;

  int count = isPrime(root->val) ? 1 : 0;

  count += countPrimeNodes(root->left);
  count += countPrimeNodes(root->right);

  return count;
}

int countLeafNodes(node *root) {
  if (root == nullptr) return 0;

  if (root->left == nullptr && root->right == nullptr)
    return 1;

  return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
  node *root = NULL;
  int n = 12;
  int a[n] = {44,-18,88,13,-37,59,108,-15,-23,40,55,71};
  for (int i = 0; i < n; i++) insertNode(&root, a[i]);
  inorder(root);
  cout << endl;
  cout << "Duong: " << countAmDuong(root, "duong") << endl;
  cout << "Am: " << countAmDuong(root, "am") << endl;
  cout << "Duong nho nhat: " << minDuong(root) << endl;
  cout << "Tong: " << tong(root) << endl;
  cout << "So nut: " << countNodes(root) << endl;
  return 0;
}
```
