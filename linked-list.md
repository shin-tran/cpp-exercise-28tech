# linked list

## Simply linked list

```c
#include <iostream>

using namespace std;

struct node {
  int data;
  node *next;
};

node *makeNode(int x) {
  node *newNode = new node;
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

int size(node *head) {
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
  if (*head == NULL)
    *head = makeNode(x);
  else {
    node *temp = *head;
    while (temp->next != NULL)
      temp = temp->next;
    temp->next = makeNode(x);
  }
}

void insertFrontK(node **head, int x, int k) {
  if ((*head)->data == k) {
    pushFront(head, x);
    return;
  }
  node *temp = *head;
  while (temp->next->data != k && temp->next != NULL) {
    temp = temp->next;
  }
  node *newNode = makeNode(x);
  newNode->next = temp->next;
  temp->next = newNode;
}

void insertBackK(node **head, int x, int k) {
  node *temp = *head;
  while (temp->data != k && temp->next != NULL) {
    temp = temp->next;
  }
  node *newNode = makeNode(x);
  newNode->next = temp->next;
  temp->next = newNode;
}

void insert(node **head, int x, int k) {
  int n = size(*head);
  if (k < 1 || k > n + 1)
    return;
  if (k == 1) {
    pushFront(head, x);
    return;
  }
  node *temp = *head;
  for (int i = 1; i < k - 1; ++i) {
    temp = temp->next;
  }
  node *newNode = makeNode(x);
  newNode->next = temp->next;
  temp->next = newNode;
}

void popFront(node **head) {
  if (*head != NULL) {
    node *temp = *head;
    *head = (*head)->next;
    delete temp;
  }
  else
    cout << "Empty\n";
}

void popBack(node **head) {
  if (*head == NULL) {
    cout << "Empty\n";
    return;
  }
  node *temp = *head;
  if (temp->next == NULL) {
    *head = NULL;
    delete temp;
    return;
  }
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  node *last = temp->next;
  temp->next = NULL;
  delete last;
}

void popK(node **head, int k) {
  int n = size(*head);
  if (k < 1 || k > n + 1)
    return;
  if (k == 1) {
    popFront(head);
    return;
  }
  node *temp = *head;
  for (int i = 1; i < k - 1; ++i) {
    temp = temp->next;
  }
  node *last = temp->next;
  temp->next = last->next;
  delete last;
}

void popX(node **head, int x) {
  node *temp = *head;
  while (temp->next->data != x && temp->next != NULL) {
    temp = temp->next;
  }
  if (temp->next == NULL) {
    cout << "Khong co gia tri x de xoa!\n";
    return;
  }
  node *last = temp->next;
  temp->next = last->next;
  delete last;
}

void reverse(node **head) {
  node *curr = *head, *next, *prev = NULL;
  while (curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  *head = prev;
}

void tachDS(node *head, node **chan, node **le) {
  node *chanTail = NULL, *leTail = NULL;
  while (head != NULL) {
    if (head->data % 2 == 0) {
      if (*chan == NULL) {
        *chan = head;
        chanTail = head;
      } else {
        chanTail->next = head;
        chanTail = chanTail->next;
      }
    } else {
      if (*le == NULL) {
        *le = head;
        leTail = head;
      } else {
        leTail->next = head;
        leTail = leTail->next;
      }
    }
    head = head->next;
  }
  if (chanTail != NULL) chanTail->next = NULL;
  if (leTail != NULL) leTail->next = NULL;
}

void selectionSort(node **head) {
  if (*head == NULL) return;
  node *temp = *head;
  while (temp != NULL) {
    node *min = temp;
    node *r = temp->next;
    while (r != NULL) {
      if (min->data > r->data)
        min = r;
      r = r->next;
    }
    int x = temp->data;
    temp->data = min->data;
    min->data = x;
    temp = temp->next;
  }
}

node *getTail(node *cur) {
  while (cur != NULL && cur->next != NULL) cur = cur->next;
  return cur;
}

node *partition(node *head, node *tail) {
  node *pivot = head, *pre = head, *curr = head;
  while (curr != tail->next) {
    if (curr->data < pivot->data) {
      int x = curr->data;
      curr->data = pre->next->data;
      pre->next->data = x;
      pre = pre->next;
    }
    curr = curr->next;
  }
  int x = pivot->data;
  pivot->data = pre->data;
  pre->data = x;
  return pre;
}

void quickSortHelper(node *head, node *tail) {
  if (head == NULL || head == tail) return;
  node *pivot = partition(head, tail);
  quickSortHelper(head, pivot);
  quickSortHelper(pivot->next, tail);
}

void quickSort(node **head) {
  node *tail = getTail(*head);
  quickSortHelper(*head, tail);
  *head = *head;
}


int main() {
  node *head = NULL,
       *chan = NULL,
       *le = NULL;

  while (1) {
    cout << "----------------\n";
    cout << "1. Duyet.\n";
    cout << "2. Them vao dau.\n";
    cout << "3. Them vao cuoi.\n";
    cout << "4. Them truoc gia tri k.\n";
    cout << "5. Them sau gia tri k.\n";
    cout << "6. Them x vao vi tri k.\n";
    cout << "7. Xoa node dau.\n";
    cout << "8. Xoa node cuoi.\n";
    cout << "9. Xoa node k.\n";
    cout << "10. Xoa node gia tri x dau tien.\n";
    cout << "11. Tach thanh 2 danh sach chan, le.\n";
    cout << "12. Dao nguoc danh sach.\n";
    cout << "13. Sap xep tang dan bang selection sort.\n";
    cout << "14. Sap xep tang dan bang quick sort.\n";
    cout << "0. Thoat.\n";
    cout << "Nhap lua chon: ";
    int lc;
    cin >> lc;
    int x, k;
    switch (lc) {
    case 0:
      return 0;
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
      insertFrontK(&head, x, k);
      break;
    case 5:
      cout << "Nhap x: ";
      cin >> x;
      cout << "Nhap k: ";
      cin >> k;
      insertBackK(&head, x, k);
      break;
    case 6:
      cout << "Nhap x: ";
      cin >> x;
      cout << "Nhap k: ";
      cin >> k;
      insert(&head, x, k);
      break;
    case 7:
      popFront(&head);
      break;
    case 8:
      popBack(&head);
      break;
    case 9:
      cout << "Nhap k: ";
      cin >> k;
      popK(&head, k);
      break;
    case 10:
      cout << "Nhap x: ";
      cin >> x;
      popX(&head, x);
      break;
    case 11:
      tachDS(head, &chan, &le);
      duyet(chan);
      cout << endl;
      duyet(le);
      cout << endl;
      break;
    case 12:
      reverse(&head);
      break;
    case 13:
      selectionSort(&head);
      break;
    case 14:
      quickSort(&head);
      break;
    }
  }
  return 0;
}
```

## Doubly linked list

```c
#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

struct node {
  int data;
  node *next;
  node *prev;
};

node *makeNode(int x) {
  node *newNode = new node;
  newNode->data = x;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

int size(node *head) {
  int cnt = 0;
  while (head != NULL) {
    ++cnt;
    head = head->next;
  }
  return cnt;
}

void duyet(node *head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}

void pushFront(node **head, int x) {
  node *newNode = makeNode(x);
  newNode->next = *head;
  if (*head != NULL) (*head)->prev = newNode;
  *head = newNode;
}

void pushBack(node **head, int x) {
  node *newNode = makeNode(x);
  node *temp = *head;
  if (*head == NULL) *head = makeNode(x);
  else {
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
}

void insert(node **head, int k, int x) {
  int n = size(*head);
  if (k < 1 || k > n + 1) return;
  if (k == 1) {
    pushFront(head, x);
    return;
  }
  if (k == n + 1) {
    pushBack(head, x);
    return;
  }
  node *temp = *head;
  for (int i = 1; i < k; ++i) temp = temp->next;
  node *newNode = makeNode(x);
  newNode->next = temp;
  temp->prev->next = newNode;
  newNode->prev = temp->prev;
  temp->prev = newNode;
}

int main() {
  node *head = NULL;
  while (1) {
    cout << "----------------\n";
    cout << "1. Duyet.\n";
    cout << "2. Them vao dau.\n";
    cout << "3. Them vao cuoi.\n";
    cout << "4. Them vao giua.\n";
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

## Kiem tra

```c
#include <iostream>
#include <iomanip>

using namespace std;

struct TTSV {
  string ten, lop, mssv;
  float gpa;
};

struct node {
  TTSV data;
  node *next;
};

node *makeNode() {
  node *newNode = new node;
  cout << "Nhap ten: ";
  getline(cin, newNode->data.ten);
  cout << "Nhap lop: ";
  getline(cin, newNode->data.lop);
  cout << "Nhap MSSV: ";
  cin >> newNode->data.mssv;
  do {
    cout << "Nhap GPA (0-4): ";
    cin >> newNode->data.gpa;
  } while (newNode->data.gpa < 0 || newNode->data.gpa > 4);
  cin.ignore();
  newNode->next = NULL;
  return newNode;
}

void duyet(node *head) {
  cout << left << setw(16)<< "Ten"
       << setw(16) << "Lop"
       << setw(16) << "MSSV"
       << setw(16) << "GPA" << endl;
  while (head) {
    cout << left << setw(16) << head->data.ten
       << setw(16) << head->data.lop
       << setw(16) << head->data.mssv
       << setw(16) << head->data.gpa << endl;
    head = head->next;
  }
}

void pushFront(node **head) {
  node *newNode = makeNode();
  newNode->next = (*head);
  (*head) = newNode;
}

void pushBack(node **head) {
  if (!(*head)) pushFront(head);
  else {
    node *temp = *head;
    while (temp->next) {
      temp = temp->next;
    }
    temp->next = makeNode();
  }
}

void gpaGTThree(node *head) {
  while (head) {
    if (head->data.gpa >= 3) {
      cout << left << setw(16)<< "Ten"
           << setw(16) << "Lop"
           << setw(16) << "MSSV"
           << setw(16) << "GPA" << endl;
      cout << left << setw(16) << head->data.ten
           << setw(16) << head->data.lop
           << setw(16) << head->data.mssv
           << setw(16) << head->data.gpa << endl;
    }
    head = head->next;
  }
}

void timMSSV(node *head, string s) {
  while (head) {
    if (head->data.mssv == s) {
      cout << left << setw(16)<< "Ten"
           << setw(16) << "Lop"
           << setw(16) << "MSSV"
           << setw(16) << "GPA" << endl;
      cout << left << setw(16) << head->data.ten
           << setw(16) << head->data.lop
           << setw(16) << head->data.mssv
           << setw(16) << head->data.gpa << endl;
    }
    head = head->next;
  }
}

void popSVLTTwo(node **head) {
  while (*head && (*head)->data.gpa < 2) {
    node *temp = *head;
    *head = (*head)->next;
    delete temp;
  }
  node *curr = *head;
  while (curr && curr->next) {
    if (curr->next->data.gpa < 2) {
      node *temp = curr->next;
      curr->next = curr->next->next;
      delete temp;
    } else curr = curr->next;
  }
}

void gpaGiamDan(node **head) {
  node *temp = *head;
  while (temp) {
    node *max = temp, *j = temp->next;
    while (j) {
      if (max->data.gpa < j->data.gpa) max = j;
      j = j->next;
    }
    if (max != temp) {
      TTSV data = max->data;
      max->data = temp->data;
      temp->data = data;
    }
    temp = temp->next;
  }
}

void addNewSV(node **head) {
  node *newNode = makeNode();
  if (!(*head) || (*head)->data.gpa < newNode->data.gpa) {
    newNode->next = *head;
    *head = newNode;
    return;
  }
  node *curr = *head;
  while (curr->next && curr->next->data.gpa >= newNode->data.gpa){
    curr = curr->next;
  }
  newNode->next = curr->next;
  curr->next = newNode;
}

int main() {
  node *head = NULL;
  while (1) {
    cout << "---------- Thong tin sinh vien ----------\n";
    cout << "0. Thoat\n";
    cout << "1. Duyet\n";
    cout << "2. Them vao dau\n";
    cout << "3. Them vao cuoi\n";
    cout << "4. TT sinh vien co GPA >= 3\n";
    cout << "5. Tim sinh vien theo mssv\n";
    cout << "6. Xoa sinh vien co diem < 2\n";
    cout << "7. Sap xep danh sach theo thu tu GPA giam dan\n";
    cout << "8. Them sinh vien moi vao danh sach giam dan\n";
    int lc;
    string s;
    cout << "Nhap lua chon: "; cin >> lc;
    cin.ignore();
    switch (lc) {
      case 0: return 0;
      case 1: duyet(head); break;
      case 2: pushFront(&head); break;
      case 3: pushBack(&head); break;
      case 4: gpaGTThree(head); break;
      case 5:
        cout << "Nhap MSSV: "; cin >> s;
        timMSSV(head, s);
        break;
      case 6: popSVLTTwo(&head); break;
      case 7: gpaGiamDan(&head); break;
      case 8: addNewSV(&head); break;
    }
  }
  return 0;
}
```
