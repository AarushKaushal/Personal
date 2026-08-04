#include<bits/stdc++.h>
using namespace std;
//int partition(vector<int> &arr,int low, int high)
int partition(int arr[],int low, int high){
    int i=low, j=high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i] <=pivot && i <=high) i++;
        while(arr[j] >pivot && j >=low) j--;
        if(i <j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high){
    if(low >= high) return;
    int pIndex = partition(arr,low,high);
    quickSort(arr, low, pIndex-1);
    quickSort(arr,pIndex+1,high);
}
int main(){
    cout<< "Enter the number of elements: ";
    int n;
    cin >> n;
    cout <<"Enter the elements: ";
    int arr[n];
    for(int i=0;i<n;i++)cin >> arr[i];
    quickSort(arr,0,n-1);
    cout << "Sorted Array :";
    for(int i : arr) cout << i << " ";
}