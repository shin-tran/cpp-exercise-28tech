#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
  if (a.second != b.second) return a.second < b.second;
  return a.first > b.first;
}

int main() {
  faster();
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    mp[x]++;
  }
  vector<pair<int, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), cmp);
  cout << v[v.size() - 1].first << " " << v[v.size() - 1].second;
  return 0;
}