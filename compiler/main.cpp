#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  for (int &x : a) cin >> x;
  set<int> se;
  for (int x : a) se.insert(x);
  cout << se.size();
  return 0;
}