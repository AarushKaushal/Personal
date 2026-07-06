/*
space                   stars                 space
4                          1                    4
3                          3                    3
2                          5                    
1                          7
0                          9

so space = n-i-1
stars = 2 *i +1
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<5;i++){
        //space
        for(int j=0;j<n-i;j++){
            cout <<" ";
        }
        for(int j=0; j < 2*i+1; j++){
            cout << "*";
        }
        for(int j=0;j<n-i;j++){
            cout <<" ";
        }
        cout << "\n";
    }
}