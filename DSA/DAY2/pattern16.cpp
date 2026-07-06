#include<iostream>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    for(int i=0; i< n ; i++){
        for(int j=0; j< n-i; j++){
            cout << " ";
        }
        for(int j=0; j< 2*i+1; j++){
            cout << ch ;
            if(j<i) ch++;
            else ch--;
        }
        for(int j=0; j< n-i; j++){
            cout << " ";
        }
        cout << "\n";
        ch = 'A';
    }
}