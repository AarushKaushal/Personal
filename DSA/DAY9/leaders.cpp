#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {17,18,5,4,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxRight=INT_MIN;
    vector<int> ans;
    //BRUTE: O(n2) | O(n)
    // for(int i=0;i<n;i++){
    //     bool leader =true;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]<arr[j]){
    //             leader=false;
    //             break;
    //         }
    //     }
    //     if(leader==true) ans.push_back(arr[i]);
    // }
    //OPTIMAL: O(n) | O(n)
    for(int i=n-1; i>=0; i--){
        if(arr[i]>maxRight){
            ans.push_back(arr[i]);
            maxRight=arr[i];
        }
    sort(ans.begin(),ans.end());
    }    
    for(int i:ans)cout << i <<" ";
}