#include<bits/stdc++.h>
using namespace std;
int n;
bool repeat(int i, string s){
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return repeat(i+1,s);
}
int main(){
    string s;
    cout << "Enter name :";
    cin >> s;
    n=s.size();
    cout << repeat(0,s);
}