#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int temp = 0;
    for (int i =2; i<n/2;i++){
        if(n%i==0){
            temp++;
            break;
        }
    }
    if(temp==0){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }
    return 0;
}