#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    while(N != 0){
        int lastDigit = N % 10;
        cout << lastDigit << " ";
        N = N / 10;
    }
}
