#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr , int l , int r){

    // base condition
    if( l >= r){
        return;
    }

    swap(arr[l] , arr[r]);
    reverse(arr , l+1 , r-1);

}

int main(){

    vector<int> arr = {1,2,3,4,5};
    cout << "Before Reverse : " << endl;
    for(auto it : arr){
        cout << (it) << " ";
    }
    cout << endl;

    reverse(arr , 0 , arr.size() - 1);

    cout << "After Reverse : " << endl;
    for(auto it : arr){
        cout << (it) << " ";
    }

}