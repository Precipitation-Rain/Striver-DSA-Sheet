#include<bits/stdc++.h>
using namespace std;

int main()
{

    /*
    Stack:
    1.Lifo => Last in first out
    2.main 3 operations : push , pop , top
    3.complexity of all 3 is o(1)
    */

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    cout << st.top()  << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.empty() << endl;
}