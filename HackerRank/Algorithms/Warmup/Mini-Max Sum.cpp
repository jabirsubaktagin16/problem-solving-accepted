#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<unsigned long int> arr(5);
    unsigned long int minValue = ULONG_MAX;
    unsigned long int maxValue = 0;
    unsigned long int sum = 0;
    for(int i = 0; i < 5; i++){
       cin >> arr[i];
        sum += arr[i];
        minValue = min(minValue,arr[i]);
        maxValue = max(maxValue,arr[i]);
    }

    cout<<sum - maxValue<<" "<<sum - minValue<<endl;
    return 0;
}
