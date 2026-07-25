#include<bits/stdc++.h>
using namespace std;
int cnt=1;
int repeat(int n){
if(n==0)
    return 0;
else
    cout<< cnt++ <<endl;
return repeat(n-1) ;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    repeat(n);
}