#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a=0;
    for(int i=0;i<5;i++){
        if (i %2==0) a=1;
            else a=0;
        for(int j=0;j<=i;j++){
            cout << a << " ";
            a= 1-a;
        }
        cout << "\n";
    }
}