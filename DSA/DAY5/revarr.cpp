#include<bits/stdc++.h>
using namespace std;

int repeat(int arr[], int s, int e){
if (s >= e) return 0;
else swap(arr[s],arr[e]);
return repeat(arr, s+1, e-1);
}
int main(){
    int n;
    cout << "Number of elements=";
    cin >> n;
    cout <<"Enter elements: ";
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    repeat(arr,0,n-1);
    for(int i: arr) cout << i << " ";
}