#include<bits/stdc++.h>
using namespace std;
int main(){


int n ;
cin >> n;

int arr[n];
for(int i = 0 ; i < n; i++){
    cin >> arr[i];
}

// prestoring

int hashh[13] = {0};
for(int i = 0 ; i < n ; i++){
    hashh[arr[i]]++;
}



int num ;
cin >> num;
cout << num << " : " << hashh[num];



}