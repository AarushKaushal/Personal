#include<bits/stdc++.h>
using namespace std;
int main(){
    //O(3n) | O(1)
    int arr[] = {17,18,5,4,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ind=-1;
    //O(n)
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr,arr+n);
        for(int i: arr) cout<< i<< " ";
        return 0;
    }
    //O(n)
    for(int i=n-1;i>=0;i--){
        if(arr[ind]<arr[i]){
            swap(arr[i],arr[ind]);
            //O(n)
            reverse(arr+ind+1,arr+n);
            for(int i: arr) cout<< i<< " ";
            return 0;
        }
    }
}    