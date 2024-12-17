#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
  return a.second < b.second;
}

int main() {
  faster();
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (auto &it : v) cin >> it.first >> it.second;
  sort(v.begin(), v.end(), cmp);
  int cnt = 1;
  int temp = v[0].second;
  for (int i = 1; i < n; i++) {
    if (v[i].first > temp) {
      temp = v[i].second;
      ++cnt;
    }
  }
  cout << cnt;
  return 0;
}