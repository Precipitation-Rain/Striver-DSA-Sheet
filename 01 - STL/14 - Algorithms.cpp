#include<bits/stdc++.h>
using namespace std;

int main(){

    // sort the array
    int arr[] ={5,9,2,6,3,0,1};
    int size = 7;
    sort(arr , arr+size);

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;

    // sort the vector
    vector<int> v = {2,6,3,9,8};
    sort(v.begin() , v.end());


    // sorting in descendin order
    sort(arr , arr+size , greater<int>());


    // sorting based on my way


    // no of 1's in the given number : also methods for long and long long
    int num = 8;
    int cnt = __builtin_popcount(num);
    cout << cnt << endl;

    // next permutation : must sort the string before doing permutation(its is must)
    string s = "123";
    do{
        cout << s << endl;
    }
    while(next_permutation(s.begin(),s.end()));


    // maximum and minimum elements
    int maxi = *max_element(arr , arr+size);
    int min = *min_element(arr , arr+size);
    cout << maxi << " " << min << endl;




}