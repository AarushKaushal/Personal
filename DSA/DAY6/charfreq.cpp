#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cout << "Enter the string :";
    cin >> n;
    unordered_map<char,int> mpp;
    for(int i=0;i<n.size();i++){
        mpp[n[i]]++;
    }
    for (auto it=mpp.begin();it !=mpp.end();it++){
        cout << "Frequency of "<< it->first << " is " << it->second << "\n";
    }
}