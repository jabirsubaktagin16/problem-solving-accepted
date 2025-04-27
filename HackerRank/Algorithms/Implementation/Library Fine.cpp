#include <bits/stdc++.h>
using namespace std;

int main() {
  long int d1, d2, m1, m2, y1, y2, fine = 0;
  cin >> d1 >> m1 >> y1;
  cin >> d2 >> m2 >> y2;

  if (d1 > d2 && m1 == m2 && y1 == y2)
    fine = (d1 - d2) * 15;
  else if (m1 > m2 && y1 == y2)
    fine = (m1 - m2) * 500;
  else if (y1 > y2)
    fine = 10000;
  cout << fine << endl;
  return 0;
}