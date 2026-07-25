#include<bits/stdc++.h>
using namespace std;
int repeat(char name[], int n){
if (n==0)
    return 0;
    else
    cout<<name<<endl;
return repeat(name, n-1) ;
}
int main(){
    char name[100];
    int n;
    cout<<"Enter your name: ";
    cin.getline(name, 100);
    cout<<"Enter the number of times to repeat: ";
    cin>>n;
    repeat(name, n);
}