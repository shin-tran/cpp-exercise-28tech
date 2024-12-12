#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main() {
  faster();
  int n; cin >> n;
  map<ll, int> mp;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    mp[x]++;
  }
  for (map<ll, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}