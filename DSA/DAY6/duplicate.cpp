#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter the number of elements :";
    int n;
    cin >> n;
    int m;
    map<int,int> mpp;
    cout << "Enter the elements :";
    while(n !=0){
    cin >> m;
    mpp[m]++;
    n--;
    }
    for(auto it = mpp.begin();it !=mpp.end();it++){
        if(it->second >1)cout << it->first<< " ";
    }
}