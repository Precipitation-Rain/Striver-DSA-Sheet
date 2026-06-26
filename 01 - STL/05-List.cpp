#include<bits/stdc++.h>
using namespace std;

int main(){


    /*
    1.Almost similar to vector 
    2.all properties are similar to vector
    3.Only diff is list allows front operations as well
    4.all functions like swap, copy , size , emplace_back , push_back , are same
    5.push_fron operation in list is soo soo cheap compared to push_back of vector
    */
    list<int> l = {1,2,3,4,5};
    for(auto it : l){
        cout << it << " ";
    }
    cout << endl;

    l.push_back(10);
    l.emplace_back(20);
    l.push_front(100);
    for(auto it : l){
        cout << it << " ";
    }

}