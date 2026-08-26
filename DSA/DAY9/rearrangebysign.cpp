#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,1,-2,-5,2,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    //BRUTE: O(n) + O(n/2) | O(n/2 +n/2)
    // vector<int> pos,neg;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>0)pos.push_back(arr[i]);
    //     else neg.push_back(arr[i]);
    // }
    // for(int i=0;i<n/2;i++){
    //     arr[2*i]=pos[i];
    //     arr[2*i+1]=neg[i];
    // }
    // for(int i: arr)cout << i << " ";
    //OPTIMAL: O(n) | O(n)
    vector<int>ans(n,0);
    int posIndex=0,negIndex=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negIndex]=arr[i];
            negIndex+=2;
        }else{
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
    }
    for(int i:ans) cout << i << " "; 
}