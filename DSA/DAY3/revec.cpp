#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "Enter the number of elements in array:";
cin >> n;
vector<int> v(n);
cout << "Enter the elements: ";
for(int i=0; i<n; i++){
    cin >> v[i];
}
cout << "The elements in the array are: ";
for(auto it = v.begin(); it !=v.end(); it++){
    cout << *(it)<< " ";
}
cout << "\nThe elements in reverse order are: ";
for(auto it = v.rbegin(); it !=v.rend(); it++){
    cout << *(it)<< " ";
}
}