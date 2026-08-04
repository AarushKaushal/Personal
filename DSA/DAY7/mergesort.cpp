//Best=Worst= O(nlogn)
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low, int mid, int high){
    int temp[100];// vector<int> temp;
    int left=low;
    int right=mid+1;
    int k=low;
    while(left <=mid && right <=high){
        if(arr[left]<=arr[right])temp[k++]=arr[left++];//temp.push_back(arr[left]);
        else temp[k++]=arr[right++];
    }    
    while(left<=mid) 
        temp[k++]=arr[left++];
    while(right<=high)
        temp[k++]=arr[right++];
    for(int i=low ; i<=high;i++)
        arr[i]=temp[i];//arr[i]=temp[i-low];
}
void ms(int arr[],int low,int high){
    if(low >=high)return;
    int mid = (low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);

}
void mergeSort(int arr[],int n){
    ms(arr,0,n-1);
}
int main() {
    int arr[100], n, i;

    cout <<"Enter number of elements: ";
    cin >> n;

    cout <<"Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, n );

    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}