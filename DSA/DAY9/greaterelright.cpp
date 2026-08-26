#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {17,18,5,4,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxRight=-1;
        for(int i=n-1;i>=0;i--){
            int current=arr[i];
            arr[i]=maxRight;
            maxRight=max(maxRight,current);
        }
    for(int i:arr) cout << i <<" ";
}