#include<bits/stdc++.h>
using namespace std;

int main(){

    /*Queue
    1.All operations are in o(1)
    2.First in First out
    3.size , empty , swap all are same as stack
    */

    queue <int > q;

    q.push(2);
    q.push(4);
    q.push(6);
    q.emplace(8);

    cout << q.size() << endl;
    cout << q.back() << endl;

    q.back() = q.back() + 10;
    cout << q.back() << endl;

    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

}