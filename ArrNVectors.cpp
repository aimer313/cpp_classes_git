#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {0,0,0,1,1,0};
    int n = 7;
    int i = 0 , j = 6;
    while(i < j){
        if(arr[i] == 0){
            i++ ;
        }
        else if(arr[j] == 1){
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
}

