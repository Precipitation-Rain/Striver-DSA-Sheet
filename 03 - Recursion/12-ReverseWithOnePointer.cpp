#include<bits/stdc++.h>
using namespace std;

void reverse(int i , vector<int> &arr , int n){

    if( i >= n/2){
        return;
    }

    swap(arr[i] , arr[n-i-1]);

    reverse(i+1 , arr , n);


}

int main(){

    vector<int> arr = {1,2,3,4,5};
    cout << "Before Reverse : " << endl;
    for(auto it : arr){
        cout << it << " " ;
    }
    cout << endl;

    int n = arr.size();
    reverse(0 , arr , n);

    cout << "After Reverse : " << endl;
    for(auto it : arr){
        cout << it << " " ;
    }
    cout << endl;


}