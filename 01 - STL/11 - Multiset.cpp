#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
        SET:
        - Sorted & not unique
        - all operations = logn
        - implemented using the tree ds
        - all functions like swap , begin , end , rbegin , rend , empty are same as vector
    */

    multiset<int> st ;
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(8);

    // when item in set
    auto it = st.find(1);
    cout << *it << endl;

    // when item not in set
    auto it2 = st.find(6);
    cout << *it2 << endl;

    st.erase(1); // removes all 1

    // if present gives 1 , if not present gives 0
    int cnt = st.count(1);
    cout << cnt << endl;

    // // we can also erase the it
    // st.erase(it);

    // set<int> st2 = {3,3,3,4,5}; => did not work
    // st2.erase(st2.find(3) , st2.find(3) + 2); // ans = {3,4,5}

}