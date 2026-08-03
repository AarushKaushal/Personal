#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter the string :";
    cin >> s;
    map<char,int> mpp;
    for(char ch : s){
        mpp[ch]++;
    }
    for(char ch: s){
        if(mpp[ch] == 1){
            cout << ch;
            return 0;
        }
    }
}