#include<bits/stdc++.h>
using namespace std;
int repeat(int n){
    if(n <=1) return n;
    return repeat(n-1)+repeat(n-2);
}
int main(){
    int n;
    cout << "Enter number :";
    cin >>n;
    cout << repeat(n-1);
}
// T ~ O(2^n) tree divides into two each time