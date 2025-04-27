#include <bits/stdc++.h>
using namespace std;

int main() {

  int budget, n, m, res = -1, keyboard[1001], usb[1001];

  cin >> budget >> n >> m;
  for (int i = 0; i < n; i++)
    cin >> keyboard[i];
  for (int i = 0; i < m; i++)
    cin >> usb[i];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (keyboard[i] + usb[j] <= budget)
        res = max(res, keyboard[i] + usb[j]);
    }
  }
  cout << res << endl;
  return 0;
}
