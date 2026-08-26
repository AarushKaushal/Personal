#include<bits/stdc++.h>
using namespace std;
bool ls(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1,2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int longest=1;
    //BRUTE: O(n2) | O(1)
    // for(int i=0;i<n;i++){
    //     int x=arr[i];
    //     int cnt=1;
    //     while(ls(arr,n,x+1)==true){
    //         x++;
    //         cnt++;
    //     }
    //     longest=max(longest,cnt);
    // }
    //BETTER: O(nlogn) +O(n) | O(1)
    // sort(arr,arr+n);
    // int lastsmaller=INT_MIN;
    // int cnt=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]-1==lastsmaller){
    //         cnt++;
    //         lastsmaller=arr[i];
    //     }else if(arr[i] !=lastsmaller){
    //         cnt=1;
    //         lastsmaller=arr[i];
    //     }
    //     longest=max(longest,cnt);
    // }
    //OPTIMAL:O(n)+O(~2n) | O(n)
    unordered_set<int> seq;
    for(int i=0;i<n;i++)seq.emplace(arr[i]);
    for(auto it : seq) {
        //we are staring from 1st element of seq, not from middle
        if(seq.find(it - 1) == seq.end()) {
            int cnt = 1;
            int x = it;

            while(seq.find(x + 1) != seq.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }

            longest = max(longest, cnt);
        }
    }

    cout << longest;
}    