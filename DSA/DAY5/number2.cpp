// #include<bits/stdc++.h>
// using namespace std;
// int repeat(int n){
// if(n == 0) return 0;
// else cout << n<< "\n";
// return repeat(n-1);
// }
// int main(){
//     int n;
//     cout << "Enter the number :";
//     cin >> n;
//     repeat(n);
// }
#include<bits/stdc++.h>
using namespace std;
void repeat(int i,int n){
    if(i >n) return;
    repeat(i+1,n);
    cout << i;
}
int main(){
    int n;
    cout <<"Enter num :";
    cin >> n;
    repeat(1,n);
}