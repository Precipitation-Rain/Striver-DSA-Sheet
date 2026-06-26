#include<bits/stdc++.h>
using namespace std;

int main(){


    // disadvantage of array => It is static => int arr[5] = {1,2,3,4,5} => if we go to insert another element it will give an error => array are fixed in size

    // vector => dynamic in nature


    vector<int> v ;
    //insertion
    v.push_back(1);
    v.emplace_back(10); // faster than push_back()

    // vector of pair
    vector<pair<int , int>> vec;
    vec.push_back({22,33});
    vec.emplace_back(44,55);

    // vector with defined size and filled with one elemnt
    vector<int> v2(5, 100); // vector of size 5 & all elements = 100;
    vector<int> v3(5); // vector of size of & all elements fillled with 0 / garbage value , depends on the compiler => even we defined size we can insert more elements into it




}