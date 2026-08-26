#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {2,2,3,3,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    //BRUTE: O(n^2) | O(1)
    // for(int i=0;i<n;i++){
    //     int cnt=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[i]==arr[j])
    //         cnt++;
    //     }
    //     if(cnt > n/2){
    //         cout << arr[i];
    //         return 0;
    //     }
    // }
    // cout << "no majority element";
    //BETTER: HASHING O(nlogn OR N) +O(n) | O(n)
    // unordered_map<int,int> mpp;
    // for(int i: arr)mpp[i]++;
    // for(int i=0;i<n;i++){
    //     if(mpp[arr[i]]> n/2){ 
    //     cout << arr[i];
    //     return 0;
    //     }
    // }
    // cout<< "no majority element";
    //OPTIMAL: Moore's Voting algorithm: O(n) | O(1)
    int cnt=0,el=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=arr[i];
            cnt++;
        }else if(arr[i]==el){
            cnt++;
        }else{
            cnt --;
        }
    }
    // do this only when array might not have maj el O(n)
    int cnt1=0;
    for(int i: arr)if(i==el)cnt1++;
    if(cnt1> n/2)cout << el;
}