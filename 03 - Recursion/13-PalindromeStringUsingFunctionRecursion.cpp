

// tc = o(n/2)
// sc = o(n/2)
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s , int i , int n){

    // base case
    if(s[i] != s[n-i-1]){
        return false;
    }

    //base case 2
    if( i >= n/2){
        return true;
    }

    return isPalindrome(s , i+1 , n);
}

int main(){

    string s = "maakram";

    cout << isPalindrome(s , 0 , s.size()) << endl;

}