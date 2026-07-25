#include<bits/stdc++.h>
using namespace std;
int rev=0;
int repeat(int n){
if(n == 0) return 0;
else rev=rev*10+n%10;
return repeat(n/10);
}
int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;
    repeat(n);
    if(rev==n) cout << "Palindrome";
    else cout << "Not Palindrome";
}