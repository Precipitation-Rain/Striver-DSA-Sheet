#include<bits/stdc++.h>
using namespace std;

void f(int i , int n){

    // base codnition
    if( i > n){
        return;
    }

    cout << "Rajvardhan , Tu karlega yaar , Be consistent" << endl;
    f(i+1 , n);

}

int main(){

    int n ;
    cin >> n;

    f(1 , n);

}