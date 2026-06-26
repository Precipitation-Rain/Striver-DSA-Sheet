#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    PRIORITY QUEUE
    1.Maximum element get the first position
    2.same for all data types
    3.push, pop => o(logn)
    4.top => o(1)
    5.priority queue (maxium element at top) => max heap
      priority queue (minimum element at top) => min heap
    6.Implemented using the tree DS
    */
    priority_queue<int> pq; 
    
    pq.push(2);
    pq.push(46);
    pq.push(23);
    pq.emplace(49);

    cout << pq.top() << endl;
    cout << pq.size() << endl;

    pq.pop();

    cout << pq.top() << endl;


    // min heap

    priority_queue<int , vector<int> , greater<int> > p; 
    
    p.push(2);
    p.push(46);
    p.push(23);
    p.emplace(49);

    cout << p.top() << endl;
    cout << p.size() << endl;

    p.pop();

    cout << p.top() << endl;



}