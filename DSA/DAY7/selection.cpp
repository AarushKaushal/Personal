//BEST CASE =O(n^2)=WORST CASE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout << "Enter the elements ";
    for(int i=0;i<n;i++)cin >> arr[i];
    for (int i=0;i<n-1;i++){
        int min=i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) {
                min=j;
            }    
        }
        swap(arr[i],arr[min]);
    }
    for (int i : arr)cout << i <<" ";
}