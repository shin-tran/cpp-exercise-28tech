#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
  if (a.second != b.second) return a.second > b.second;
  return a.first < b.first;
}

bool cmp2(const pair<int, int>& a, const pair<int, int>& b) {
  return a.second > b.second;
}

int main() {
  faster();
  int n; cin >> n;
  int a[n];
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  vector<pair<int, int>> v;
  vector<pair<int, int>> v2;
  for (int i = 0; i < n; i++) {
    v.push_back({a[i], mp[a[i]]});
    v2.push_back({a[i], mp[a[i]]});
  }
  sort(v.begin(), v.end(), cmp);
  for (auto it : v) {
    cout << it.first << " ";
  }
  cout << endl;
  stable_sort(v2.begin(), v2.end(), cmp2);
  for (auto it : v2) {
    while (mp[it.first] != 0) {
      cout << it.first << " ";
      mp[it.first]--;
    }
  }
  return 0;
}