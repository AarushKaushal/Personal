/*
space                   stars                 space
0                          9                    0
1                          7                    1
2                          5                    
3                          3
4                          1

so space = i
stars = 2(n-i) - 1
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<5;i++){
        //space
        for(int j=0;j<=i;j++){
            cout <<" ";
        }
        for(int j=0; j < 2*(n-i)-1; j++){
            cout << "*";
        }
        for(int j=0;j<=i;j++){
            cout <<" ";
        }
        cout << "\n";
    }
}