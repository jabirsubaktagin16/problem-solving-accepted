#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, maximum = 0;
  cin >> n;
  int arr[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == 1)
      cnt1++;
    if (arr[i] == 2)
      cnt2++;
    if (arr[i] == 3)
      cnt3++;
    if (arr[i] == 4)
      cnt4++;
    if (arr[i] == 5)
      cnt5++;
  }
  maximum = max(cnt1, max(cnt2, max(cnt3, max(cnt4, cnt5))));
  if (maximum == cnt1)
    cout << "1" << endl;
  else if (maximum == cnt2)
    cout << "2" << endl;
  else if (maximum == cnt3)
    cout << "3" << endl;
  else if (maximum == cnt4)
    cout << "4" << endl;
  else if (maximum == cnt5)
    cout << "5" << endl;
  return 0;
}
