#include<bits/stdc++.h>
using namespace std;   
int main(){
    int a, count=0;
    cout << "Enter the number :";
    cin >> a;
    for(int i=2; i<=sqrt(a); i++){
        if(a%i == 0){
                cout << "Not prime.";
                return 0;
            }
        }
            cout << "prime.";
    }
