#include<bits/stdc++.h>
using namespace std;
int main(){

    /*
    DEQUEUE :
    1.Similart to list and vector
    2.has all functions that are in list
    3.more addition functions aare back() , front() to get that elements
    
    */

    deque<int> d = {1,2,3,4,5};
    d.push_back(6);
    d.push_front(100);

    cout << d.front() << " ";
    cout << d.back() << " ";
    cout << d.size() ;

}