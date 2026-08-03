#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements :";
    cin >> n;
    int arr[n];
    unordered_map<int,int> mpp;
    cout << "Enter the elements :";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    pair<int,int> max={0,0};
    for (auto it=mpp.begin();it !=mpp.end();it++){
        if(it->second > max.second) {
            max.second=it->second;
            max.first=it->first;
        }
    }
    cout << "Most frequent element is " << max.first;
}