#include<bits/stdc++.h>
using namespace std;

void f( int n){

    // base codnition
    if(n < 1){
        return;
    }

    cout << n << endl;
    f(n-1);

}

int main(){

    int n ;
    cin >> n;

    f( n);

}