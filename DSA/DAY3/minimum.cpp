#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The elements in the array are: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    int min = *min_element(arr, arr+n);
    cout << "\nThe minimum element in the array is: " << min;
}