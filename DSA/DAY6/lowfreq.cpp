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
    pair<int,int> min={n,n};
    for (auto it=mpp.begin();it !=mpp.end();it++){
        if(it->second < min.second) {
            min.second=it->second;
            min.first=it->first;
        }
    }
    cout << "Least frequent element is " << min.first;
}