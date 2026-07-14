#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array:";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The elements in the array are: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    set<int> s(arr, arr+n);
    cout << "\nThe elements in the array after removing duplicates are: ";
    for(int x : s){
        cout << x << " ";
    }
}