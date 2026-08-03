#include<bits/stdc++.h>
using namespace std;
int main(){
    string n1,n2;
    cout << "Enter the string1 :";
    cin >> n1;
    cout << "Enter the string2 (same length as n1) :";
    cin >> n2;
    unordered_map<char,int> mpp1;
    unordered_map<char,int> mpp2;
    for(int i=0;i<n1.size();i++){
        mpp1[n1[i]]++;
        mpp2[n2[i]]++;
    }
    for (char ch: n1){
        if(mpp1[ch] !=mpp2[ch]){
            cout<<" Not Anagrams";
            return 0;
        }
    }
    cout << "Anagrams";
}