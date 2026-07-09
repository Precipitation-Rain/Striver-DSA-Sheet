#include<bits/stdc++.h>
using namespace std;

void f(int i , int sum){

    // base condition
    if(i < 1){
        cout << sum << endl;
        return;
    }

    f(i-1 , sum + i);

}


int main(){

    int n ;
    cin >> n;

    f(n , 0);

}