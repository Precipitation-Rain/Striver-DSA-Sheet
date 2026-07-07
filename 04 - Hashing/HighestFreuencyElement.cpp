#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main(){

    vector<int> arr = {1,2,3,3,4,5,4,3,2,6,7,9,4};

    map<int , int > mpp;
    for(int i = 0 ; i < arr.size() ;i++){
        mpp[arr[i]]++;
    }

    int maxi = INT_MAX;
    int ans = -5;
    for(auto it : mpp){
       int n = it.second;
       if(n < maxi){
        maxi = n;
        ans = it.first;
       }

    }

    cout << ans;





}