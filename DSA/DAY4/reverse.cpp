#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, rev=0;
    cout << "Enter the number :";
    cin >> a;
    while(a>0){
        rev = rev*10 + a%10;
        a/=10;
    }
    cout<< "The reversed number is : " << rev;
}