#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int firstPos(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      right = mid - 1;
    }
    else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int lastPos(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      res = mid;
      left = mid + 1;
    }
    else if (a[mid] < x) left = mid + 1;
    else right = mid - 1;
  }
  return res;
}

int lowerPos(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] >= x) {
      res = mid;
      right = mid - 1;
    }
    else left = mid + 1;
  }
  return res;
}

int lowerPos2(int a[], int n, int x) {
  int res = -1;
  int left = 0, right = n - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] > x) {
      res = mid;
      right = mid - 1;
    }
    else left = mid + 1;
  }
  return res;
}

int main() {
  faster();
  int n, x; cin >> n >> x;
  int a[n];
  for (int &x : a) cin >> x;
  int l = firstPos(a, n, x), r = lastPos(a, n, x);
  cout << l << endl;
  cout << r << endl;
  cout << lowerPos(a, n, x) << endl;
  cout << lowerPos2(a, n, x) << endl;
  if (l != -1) cout << r - l + 1;
  else cout << 0;
  return 0;
}