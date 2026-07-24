#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, digit=0;
    cout << "Enter the number :";
    cin >> a;
    while(a>0){
        digit++;
        a/=10;
    }
    cout<< "The number of digits in the given number is : " << digit;
}