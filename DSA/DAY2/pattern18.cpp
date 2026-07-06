#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(char ch='A'; ch< 'A'+n; ch++){
        for(char ch2='A'; ch2<=ch; ch2++){
            cout << ch <<" ";
        }
        cout << "\n";
    }
}