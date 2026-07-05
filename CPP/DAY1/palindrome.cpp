#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number=" ;
    cin >> n;
    int temp=n;
    int rev=0;
    while(temp !=0){
        rev = (rev*10) + (temp%10);
        temp /=10;
    }
    if( rev == n){
        cout << "Palindrome";
        return 0;
    }
    cout<< "Not Palindrome";
    return 0;
}