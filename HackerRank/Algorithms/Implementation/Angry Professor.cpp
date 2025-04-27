#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, n, k;
  cin >> T;
  while (T--) {
    int cnt = 0;
    cin >> n >> k;
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] <= 0)
        cnt++;
    }
    if (cnt >= k)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
