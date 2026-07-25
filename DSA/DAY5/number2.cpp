#include<bits/stdc++.h>
using namespace std;
int repeat(int n){
if(n == 0) return 0;
else cout << n<< "\n";
return repeat(n-1);
}
int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;
    repeat(n);
}