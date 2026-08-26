#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2,3,4,-3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }else pos.push_back(arr[i]);
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }
    }else{
        for(int i=0;i<pos.size();i++){
            arr[2*i]=neg[i];
            arr[2*i+1]=pos[i];
        }
        int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }
    }
    for(int i: arr) cout<< i << " ";
}
// O(n) + O(min(pos,neg))+ O(leftovers)
//worse case: "O(0) + O(n)" and best: O(n/2) +0
// so it all comes down to O(n) + O(n)