#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 7};
    int target = 4;

    int index = upper_bound(arr.begin(), arr.end(), target) - arr.begin();

    cout << "Upper Bound Index = " << index;

    return 0;
}