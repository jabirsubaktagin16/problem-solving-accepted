#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int maximum = -1, cnt = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a > maximum) {
      maximum = a;
      cnt = 1;
    } else if (a == maximum)
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}
