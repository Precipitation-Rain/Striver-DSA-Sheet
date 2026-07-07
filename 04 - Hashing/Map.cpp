#include<bits/stdc++.h>
using namespace std;

int main(){

    // map

    int arr[] = {1,2,3,2,3,4,1};
    int n = 7;

    map<int , int> mpp;
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }

    // iterate on map
    for(auto it : mpp){
        int n = it.first;
        int n2 = it.second;
        cout << n << " -> " << n2 << endl;
    }

    cout << mpp[12] << endl;

}