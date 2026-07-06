#include<iostream>
using namespace std;
int main(){
    int n=5;
    int star=0;
    for(int i=0;i<2*n;i++){
        if(i < n){
            star = i;
        }else{star = 2*n-i;}
        for(int j=0;j<star;j++){
            cout <<"* ";
        }
        cout << "\n";
    }
}