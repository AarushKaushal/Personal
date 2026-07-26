// #include<bits/stdc++.h>
// using namespace std;
// int fact=1;
// int repeat(int n){
// if(n <=1) return 1;
// return n*repeat(n-1);
// }
// int main(){
//     int n;
//     cout << "Enter the number :";
//     cin >> n;
//     repeat(n);
//     cout << fact;
// }
#include<bits/stdc++.h>
using namespace std;
int repeat(int n){
if(n == 1) return 1;
return n*repeat(n-1);
}
int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;
    cout << "Factorial=" << repeat(n);
}