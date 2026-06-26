#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};

    // declearation of iterator => iterator acces the memory => *(iterator_name) = element at that position
    vector<int>::iterator it1 = vec.begin();
    // cout << *it1;



    // other keywords
    // vec.begin() =>points first element memory location
    // vec.end() => points to the memory location after last element
    // things called rbegin() , rend() +. also their



    /*
    // auto keyword => instead of writting vector<int>::iterator evry time just right auto it will automatically understand the data type
    auto it2 = vec.begin();
    // cout << *it2;

    for(auto it3 = vec.begin() ; it3 != vec.end() ; it3++){
        cout << *it3 << " ";
    }



    // for each loop => don't need to write *
    for(auto it4 : vec){
        cout << it4 << " ";
    }
    */


    /*
    // Delete => erase works based on memory location => if want to delete subarray then for last element you want to delete , take memroy address after that
    vector<int> p1 = {22,33,44,55,66};

    for(int i = 0 ; i < p1.size() ;i++){
        cout << p1[i] << " ";
    }

    // p1.erase(p1.begin());

    // for(int i = 0 ; i < p1.size() ;i++){
    //     cout << p1[i] << " ";
    // }

    p1.erase(p1.begin() + 2 , p1.begin() + 5);

    for(int i = 0 ; i < p1.size() ;i++){
        cout << p1[i] << " ";
    }
    */

    /*
    INSERT

    vector<int> v = {1,2,3};
    for(int i = 0 ; i < v.size() ;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    // v.insert(v.begin() , 100); /// insert at begin
    // for(int i = 0 ; i < v.size() ;i++){
    //     cout << v[i] << " ";
    // }


    //insert multiple elemnts
    // v.insert(v.begin() + 2 , 2 , 500);
    //     for(int i = 0 ; i < v.size() ;i++){
    //     cout << v[i] << " ";
    // }


    // copy 
    vector<int> demo(2,400);
    v.insert(v.begin() , demo.begin() , demo.end());
    for(int i = 0 ; i < v.size() ;i++){
        cout << v[i] << " ";
    }
    cout << endl;


    //size
    cout << demo.size() ;
    cout << endl;

    // pop_back => removes last element
     demo.pop_back() ;
     cout << demo.size() ;

    */


     //swap
     vector<int > v1 = {10,20};
     vector<int> v2 = {30,40};
     for(int i = 0 ; i < v2.size() ;i++){
        cout << v2[i] << " ";
    }
    cout << endl;

    v1.swap(v2);

    for(int i = 0 ; i < v2.size() ;i++){
        cout << v2[i] << " ";
    }
     










}