#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, arm=0, digit;
    cout << "Enter the number :";
    cin >> a;
    digit = log10(a) + 1;
    int temp = a;
    while(temp>0){
        arm += pow(temp%10, digit);
        temp/=10;
    }
    if(arm == a){
        cout << "Armstrong number.";
    }
    else{
        cout << "Not an Armstrong number.";
    }
}