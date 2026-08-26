#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    //BRUTE: O(n3) | O(1)
    // for(int i=0;i < n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i; k<=j;k++){
    //             sum+=arr[k];
    //             maxi=max(maxi,sum);
    //         }
    //     }
    // }
    //BETTER: O(n2) | O(1)
    // for(int i=0;i < n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //             sum+=arr[j];
    //             maxi=max(maxi,sum);
    //     }
    // }
    //OPTIMAL: KADANE's ALGO O(n) | O(1)
    int sum=0;
    int assE=-1;
    int start=-1;
    for(int i=0; i<n;i++){
        if(sum==0) start=i;
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            assE=i;
        }
        if(sum < 0)sum=0;
    }
    cout<<"length="<<assE-start+1<< "\n";
    cout << maxi;
}