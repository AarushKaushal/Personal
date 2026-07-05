#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number of terms in series: ";
    cin >> n;
    int a=0,b=1,c;
    cout << a << " " << b << " ";
    if(n==1){
        cout << a;
    }
    else if(n==2){
        cout << a << " " << b;
    }
    else{
    for(int i=0;i<n-2;i++){
        c=a+b;
        cout << c << " ";
        a=b;
        b=c;
    }
    }
    return 0;
}