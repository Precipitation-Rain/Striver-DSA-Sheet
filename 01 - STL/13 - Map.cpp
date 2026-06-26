#include<bits/stdc++.h>
using namespace std;

int main(){



    /*
    MAP : 
    - Store elements in key value format
    - keys are unique and sorted
    - two variation like set => multimap , unordered_map
    - erase , size , swap , empty work same as list
    - map's all operations are in log(N) while unordered_map does in o(1)
    */

    // map of integers
    map<int , int> mpp;
    mpp[1] = 2;
    mpp.insert({2,4});
    mpp.emplace(3,6);

    cout << mpp[3] << endl;
    for(auto it : mpp){
        cout << it.first << " "<< it.second ;
        cout << endl; 
    }

    // iterator
    auto it2 = mpp.find(2);
    cout << (*it2).first << endl;
    cout << (*it2).second << endl;
    auto it3 = mpp.find(7) ; // the key which not return address of memory location after last element
 

    // map of pair and int
    cout << "Pair As the Key " << endl;
    map< pair<int , int> , int > mp;

    mp[{22,33}] = 7;
    mp[{44,55}] = 8;
    mp[{66,77}] = 9;

    for(auto it5 : mp){
        cout << (it5).first.first << "-" << (it5).first.second << " : "<< (it5).second << endl;
    }


// Multipmap : Just kesy can be duplicate and sorted
// unordered_map : keys are unique and unsorted



    


}