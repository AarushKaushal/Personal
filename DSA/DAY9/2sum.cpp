#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,6,5,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=14;
    //BRUTE: O(n^2) | O(1)
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==target){
    //             cout << "YES"; //i,j
    //             return 0;
    //         }
    //     }
    // }
    //    cout << "NO";
    //BETTER: O(nlogn) OR O(n)(worst case n^2) | O(n)
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int rem=target-arr[i];
        if(mpp.find(rem)!=mpp.end()){
            cout << mpp[rem] << "," << i;
        }
        mpp[arr[i]]=i;
    }
}
    //OPTIMAL(if only yes no): two pointer greedy approach O(n) | O(1)
    //     vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<pair<int, int>> arr;

    //     for (int i = 0; i < nums.size(); i++) {
    //         arr.push_back({nums[i], i});
    //     }

    //     sort(arr.begin(), arr.end());

    //     int left = 0;
    //     int right = arr.size() - 1;

    //     while (left < right) {
    //         int sum = arr[left].first + arr[right].first;

    //         if (sum == target) {
    //             return {arr[left].second, arr[right].second};
    //         }
    //         else if (sum < target) {
    //             left++;
    //         }
    //         else {
    //             right--;
    //         }
    //     }

    //     return {};
    // }