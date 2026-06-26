#include<bits/stdc++.h>
using namespace std;

int main(){

    // simple pair
    pair<int , int> p = {3,4};
    cout << p.first << " " << p.second << " ";

    // nested pair (used to store more than 2 elements)
    pair < int , pair<int , int>> p2 = {1 , {2,3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // array of pairs
    pair <int , int> p3[] = { {11,12} , {13,14} , {15,16}};
    cout << p3[0].first << endl;
    cout << p3[2].second << endl;


}