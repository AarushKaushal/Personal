#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, rev=0;
    cout << "Enter the number :";
    cin >> a;
    int temp=a;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if(rev == a){
        cout << "The number is a palindrome.";
    }
    else{
        cout << "The number is not a palindrome.";
    }
}