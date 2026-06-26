#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
        SET:
        - Sorted & unique
        - all operations = logn
        - implemented using the tree ds
        - all functions like swap , begin , end , rbegin , rend , empty are same as vector
    */

    set<int> st ;
    st.insert(1);
    st.insert(5);
    st.insert(3);
    st.insert(8);

    // when item in set
    auto it = st.find(3);
    cout << *it << endl;

    // when item not in set
    auto it2 = st.find(6);
    cout << *it2 << endl;

    st.erase(5); // removes 5

    // if present gives 1 , if not present gives 0
    int cnt = st.count(2);
    cout << cnt << endl;

    // we can also erase the it
    st.erase(it);

    set<int> st2 = {33,44,55,66,77};
    auto it3 = st2.find(33);
    auto it4 = st2.find(55);
    st2.erase(it3 , it4); // ans = {55,66,77}

    



}