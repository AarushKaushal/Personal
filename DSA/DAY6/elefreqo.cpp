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
    for (auto it=mpp.begin();it !=mpp.end();it++){
        cout << "Frequency of "<< it->first << " is " << it->second << "\n";
    }
}