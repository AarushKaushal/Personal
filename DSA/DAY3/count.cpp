#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The elements in the array are: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    cout << "\nThe frequency of each element is: \n";
    for(auto it=freq.begin(); it!=freq.end(); it++){
        cout << (*it).first << ": " << (*it).second << endl;
    }
}