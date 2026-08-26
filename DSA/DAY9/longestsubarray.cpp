#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,1,1,1,1,4,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxlen=0;
    int k=3;
    //BRUTE:O(n^2) || O(1)
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum +=arr[j];
    //         if(sum==k)maxlen=max(maxlen,j-i+1);
    //     }
    // }
    //BETTER(OPTIMAL FOR -ve AND +ve nos): map: O(nlogn) OR unordered: O(n) / O(n^2) | O(n)
    // int sum=0;
    // int rem=0;
    // int len=0;
    // map<int,int> prevSum;
    // for(int i=0;i<n;i++){
    //     sum +=arr[i];
    //     if(sum ==k)maxlen=max(maxlen,i+1);
    //     rem= sum-k;
    //     if(prevSum.find(rem) != prevSum.end()){
    //         len = i-prevSum[rem];
    //         maxlen=max(maxlen,len);
    //     }
    //     if(prevSum.find(sum) == prevSum.end()) prevSum[sum]=i;
    // }
    //For count of subarrays having sum as k:
    // int sum = 0;
    //     int count = 0;
    //     map<int, int> prevSum;
    //     prevSum[0] = 1;
    //     for (int i = 0; i < nums.size(); i++) {
    //         sum += nums[i];
    //         int rem = sum - k;
    //         if (prevSum.find(rem) != prevSum.end()) {
    //             count += prevSum[rem];
    //         }
    //         prevSum[sum]++;
    //     }
    //OPTIMAL : O(n) | O(1)
    int left = 0, right = 0, sum=arr[0];
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
        if (sum == k) {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < n) sum += arr[right];
    }
    //Easier: 
    // int left = 0;
    // int sum = 0;
    // int maxlen = 0;
    // for (int right = 0; right < n; right++) {
    //     sum += arr[right];
    //     while (left <= right && sum > k) {
    //         sum -= arr[left];
    //         left++;
    //     }
    //     if (sum == k) {
    //         maxlen = max(maxlen, right - left + 1);
    //     }
    // }
    cout << maxlen;
}