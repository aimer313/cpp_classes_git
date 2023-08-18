#include<bits/stdc++.h>

using namespace std;
// D&C of count of occurrances
int count(int low , int high , vector<int>& ele , int key){
    if(low == high) return ele[low] == key;

    int mid = low + (high - low) / 2;

    return count(low , mid , ele , key) + count(mid+1 , low , ele , key);
}
int main() {

    vector<int> ele = {-7 , -3 , 5 , 7 , 7 , 7 , 8};

    int key = 7;

    cout << count(0 , ele.size()-1 , ele , key) << endl;

    return 0;
}