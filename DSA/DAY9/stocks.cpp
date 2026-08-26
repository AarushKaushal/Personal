#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,1,2,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int profit=0;
    int mini= arr[0];
    for(int i=0;i<n;i++){
        profit=max(profit,arr[i]-mini);
        mini=min(mini,arr[i]);
    }
    cout << profit;
}