#include<bits/stdc++.h>
using namespace std;
int sum=0;
int repeat(int n){
if(n == 0) return 0;
else sum+=n;
return repeat(n-1);
}
int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;
    repeat(n);
    cout << "Sum=" << sum;
}