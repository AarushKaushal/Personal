#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number=";
    cin >> n;
    int temp=n;
    int digit=0;
    while (temp !=0)
    {
        digit ++;
        temp /=10;
    }
    temp=n;
    int arm = 0;
    while (temp !=0){
        int a = temp %10;
        arm += pow(a,digit);
        temp /=10;
    }
    if (arm==n){
        cout << "Armstrong";
        return 0;
    }
    cout << "Not Armstrong";
    return 0;
}