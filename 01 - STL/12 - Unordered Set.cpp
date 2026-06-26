#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
        SET:
        - not Sorted & unique
        - all operations = o(1) , TC in worst case = o(n)
        - implemented using the tree ds
        - all functions like swap , begin , end , rbegin , rend , empty are same as vector
        - lower bound and upper bound does not work
    */

   unordered_set<int> st ;
    st.insert(1);
    st.insert(3);
    st.insert(4);
    st.insert(8);
    st.insert(1);

    // when item in set
    auto it = st.find(1);
    cout << *it << endl;

    cout << st.size() << endl;

    // // when item not in set => careful while in unordered_set
    // auto it2 = st.find(6);
    // cout << *it2 << endl;

     st.erase(1); // removes all 1

    // if present gives 1 , if not present gives 0
    int cnt = st.count(1);
    cout << cnt << endl;

}