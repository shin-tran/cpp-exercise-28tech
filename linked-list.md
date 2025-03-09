# linked list

## Instaltion

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct node {
  int data;
  node *next;
};

node *makeNode(int x) {
  node *newNode = new node();
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
}

void duyet(node *head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}

int countNode(node *head) {
  int cnt = 0;
  while (head != NULL) {
    ++cnt;
    head = head->next;
  }
  return cnt;
}

void pushFront(node **head, int x) {
  node *newNode = makeNode(x);
  newNode->next = *head;
  *head = newNode;
}


void pushBack(node **head, int x) {
  node *temp = *head;
  if (*head == NULL) {
    *head = makeNode(x);
  } else {
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = makeNode(x);
  }
}

void insert(node **head, int k, int x) {
  int n = countNode(*head);
  if (k < 1 || k > n + 1) return;
  if (k == 1) {
    pushFront(head, x); return;
  }
  node *temp = *head;
  for (int i = 1; i < k - 1; ++i) {
    temp = temp->next;
  }
  node *newNode = makeNode(x);
  newNode->next = temp->next;
  temp->next = newNode;
}

void popFont(node **head) {
  if (*head == NULL) return;
  node *temp = *head;
  *head = (*head)->next;
  delete temp;
}

void popBack(node **head) {
  if (*head == NULL) return;
  node *temp = *head;
  if (temp->next == NULL) {
    *head = NULL; delete temp;
    return;
  }
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  node *last = temp->next;
  temp->next = NULL;
  delete last;
}

void erase(node **head, int k) {
  int n = countNode(*head);
  if (k < 1 || k > n) return;
  if (k == 1) popFont(head);
  else {
    node *temp = *head;
    for (int i = 1; i < k - 1; ++i) {
      temp = temp->next;
    }
    node *kth = temp->next;
    temp->next = kth->next;
    delete kth;
  }
}

int main() {
  node *head = NULL;
  while (1) {
    cout << "----------------\n";
    cout << "1. Duyet.\n";
    cout << "2. Them vao dau.\n";
    cout << "3. Them vao cuoi.\n";
    cout << "4. Them vao giua.\n";
    cout << "5. Xoa node dau.\n";
    cout << "6. Xoa node cuoi.\n";
    cout << "7. Xoa node giua.\n";
    cout << "0. Thoat.\n";
    cout << "Nhap lua chon: ";
    int lc; cin >> lc;
    int x, k;
    switch (lc) {
      case 0: return 0;
      case 1:
        duyet(head);
        cout << endl;
        break;
      case 2:
        cout << "Nhap x: ";
        cin >> x;
        pushFront(&head, x);
        break;
      case 3:
        cout << "Nhap x: ";
        cin >> x;
        pushBack(&head, x);
        break;
      case 4:
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap k: ";
        cin >> k;
        insert(&head, k, x);
        break;
      case 5:
        popFont(&head);
        break;
      case 6:
        popBack(&head);
        break;
      case 7:
        cout << "Nhap k: ";
        cin >> k;
        erase(&head, k);
        break;
    }
  }
  return 0;
}
```

## Stack array

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int n = 0, myStack[10001];

void push(int x) {
  myStack[n] = x;
  ++n;
}

void pop() {
  if (n >= 1) --n;
}

int top() {
  return myStack[n - 1];
}

int size() {
  return n;
}

int main() {
  while (1) {
    cout << "----------------\n";
    cout << "1. Push.\n";
    cout << "2. Pop.\n";
    cout << "3. Top.\n";
    cout << "4. Size.\n";
    cout << "0. Thoat.\n";
    cout << "Nhap lua chon: ";
    int lc; cin >> lc;
    int x, k;
    switch (lc) {
      case 0: return 0;
      case 1:
        cout << "Nhap x: ";
        cin >> x;
        push(x);
        break;
      case 2:
        pop();
        break;
      case 3:
        top();
        break;
      case 4:
        cout << size() << endl;
        break;
    }
  }
  return 0;
}
```

## Stack linked list

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct node {
  int data;
  node *next;
};

node *makeNode(int x) {
  node *newNode = new node();
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
}

void push(node **top, int x) {
  node *newNode = makeNode(x);
  newNode->next = *top;
  *top = newNode;
}

void pop(node **top) {
  if (*top != NULL) {
    node *temp = *top;
    *top = (*top)->next;
    delete temp;
  }
}

int Top(node *top) {
  if (top != NULL) return top->data;
  return -1;
}

int size(node *top) {
  int cnt = 0;
  while (top != NULL) {
    ++cnt;
    top = top->next;
  }
  return cnt;
}

int main() {
  node *top = NULL;
  while (1) {
    cout << "----------------\n";
    cout << "1. Push.\n";
    cout << "2. Pop.\n";
    cout << "3. Top.\n";
    cout << "4. Size.\n";
    cout << "0. Thoat.\n";
    cout << "Nhap lua chon: ";
    int lc, x; cin >> lc;
    switch (lc) {
      case 0: return 0;
      case 1:
        cout << "Nhap x: ";
        cin >> x;
        push(&top, x);
        break;
      case 2:
        pop(&top);
        break;
      case 3:
        if (Top(top) != -1) cout << Top(top) << endl;
        else cout << "EMPTY\n";
        break;
      case 4:
        cout << size(top) << endl;
        break;
    }
  }
  return 0;
}
```

## Queue array

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int a[100000], maxN = 100000, n = 0;

int size() {
  return n;
}

bool empty() {
  return n == 0;
}

void push(int x) {
  if (n == maxN) return;
  a[n] = x; ++n;
}

void pop() {
  if (n == 0) return;
  for (int i = 0; i < n - 1; ++i) {
    a[i] = a[i + 1];
  }
  --n;
}

int front() {
  return a[0];
}

int main() {
  while (1) {
    cout << "----------------\n";
    cout << "1. Push.\n";
    cout << "2. Pop.\n";
    cout << "3. Front.\n";
    cout << "4. Size.\n";
    cout << "5. Empty.\n";
    cout << "6. Duyet.\n";
    cout << "0. Thoat.\n";
    cout << "Nhap lua chon: ";
    int lc; cin >> lc;
    switch (lc) {
      case 0: return 0;
      case 1:
        cout << "Nhap x: ";
        int x; cin >> x;
        push(x);
        break;
      case 2:
        pop();
        break;
      case 3:
        cout << front() << endl;
        break;
      case 4:
        cout << size() << endl;
        break;
      case 5:
        if (empty()) cout << "EMPTY\n";
        else cout << "NOT EMPTY\n";
        break;
      case 6:
        for (int i = 0; i < n; ++i) {
          cout << a[i] << " ";
        }
        cout << endl;
        break;
    }
  }
  return 0;
}
```

## Queue linked list

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct node {
  int data;
  node *next;
};

node *makeNode(int x) {
  node *newNode = new node();
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
}

void push(node **queue, int x) {
  node *temp = *queue;
  if (*queue == NULL) *queue = makeNode(x);
  else {
    while (temp->next != NULL) temp = temp->next;
    temp->next = makeNode(x);
  }
}

void pop(node **queue) {
  if (*queue == NULL) return;
  node *temp = *queue;
  *queue = (*queue)->next;
  delete temp;
}

int front(node *queue) {
  return queue->data;
}

int size(node *queue) {
  int cnt = 0;
  while (queue != NULL) {
    ++cnt;
    queue = queue->next;
  }
  return cnt;
}

bool empty(node *queue) {
  return queue == NULL;
}

void duyet(node *queue) {
  while (queue != NULL) {
    cout << queue->data << " ";
    queue = queue->next;
  }
}

int main() {
  node *queue = NULL;
  while (1) {
    cout << "----------------\n";
    cout << "1. Push.\n";
    cout << "2. Pop.\n";
    cout << "3. Front.\n";
    cout << "4. Size.\n";
    cout << "5. Empty.\n";
    cout << "6. Duyet.\n";
    cout << "0. Thoat.\n";
    cout << "Nhap lua chon: ";
    int lc; cin >> lc;
    switch (lc) {
      case 0: return 0;
      case 1:
        cout << "Nhap x: ";
        int x; cin >> x;
        push(&queue, x);
        break;
      case 2:
        pop(&queue);
        break;
      case 3:
        cout << front(queue) << endl;
        break;
      case 4:
        cout << size(queue) << endl;
        break;
      case 5:
        if (empty(queue)) cout << "EMPTY\n";
        else cout << "NOT EMPTY\n";
        break;
      case 6:
        duyet(queue);
        cout << endl;
        break;
    }
  }
  return 0;
}
```

## Linked list sort

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct SinhVien {
  string name;
  double gpa;
};

struct node {
  SinhVien data;
  node *next;
};

node *makeNode(SinhVien x) {
  node *newNode = new node();
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
}

void pushBack(node **head, SinhVien x) {
  node *temp = *head;
  if (*head == NULL) *head = makeNode(x);
  else {
    while (temp->next != NULL) temp = temp->next;
    temp->next = makeNode(x);
  }
}

void duyet(node *head) {
  while (head != NULL) {
    cout << head->data.name << " " << head->data.gpa << endl;
    head = head->next;
  }
}

void sapxep(node **head) {
  for (node *i = *head; i->next != NULL; i = i->next) {
    node *minNode = i;
    for (node *j = i ->next; j != NULL; j = j->next) {
      if (minNode->data.gpa > j->data.gpa) minNode = j;
      else if (minNode->data.gpa == j->data.gpa) {
        if (minNode->data.name > j->data.name) minNode = j;
      }
    }
    SinhVien temp = minNode->data;
    minNode->data = i->data;
    i->data = temp;
  }
}

int main() {
  node *head = NULL;
  SinhVien a[10];
  for (int i = 0; i < 5; i++) {
    getline(cin, a[i].name);
    cin >> a[i].gpa;
    cin.ignore();
    pushBack(&head, a[i]);
  }
  duyet(head);
  cout << endl;
  sapxep(&head);
  duyet(head);
  return 0;
}
```
