#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 7};
    int target = 4;

    int firstIndex = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    int lastindex = upper_bound(arr.begin(), arr.end(), target) - arr.begin();

    cout << "First index of " << target << " is: " << firstIndex << endl;
    cout << "Last index of " << target << " is: " << lastindex-1 << endl;
    return 0;
}