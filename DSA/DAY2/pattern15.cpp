#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=5;i++){
        for(char ch='A';ch<='A'+n-i;ch++){
            cout <<ch<<" ";
        }
        cout << "\n";
    }
}