//BEST CASE= O(N); WORST CASE = O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout <<"Enter the number of elements :";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements :";
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i =0; i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j >=0  && arr[j] > temp){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for (int i : arr) cout << i << " ";
}