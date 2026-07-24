#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout << "Enter the number :";
    cin >> a;
    vector<int> divisors;
    for(int i=1; i <= sqrt(a); i++){
        if(a%i == 0){
            divisors.push_back(i);
            if(i != a/i){
                divisors.push_back(a/i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    cout << "The divisors of the given number are : ";
    for( int it : divisors){
        cout << it << " ";
    }
}