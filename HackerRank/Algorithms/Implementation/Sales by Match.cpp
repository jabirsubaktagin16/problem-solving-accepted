#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[102], n, cnt[102] = {0}, res = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    cnt[arr[i]]++;
  }
  for (int i = 0; i < 101; i++) {
    if (cnt[i] != 0)
      res += cnt[i] / 2;
  }
  cout << res << '\n';
  return 0;
}
