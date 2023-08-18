#include <bits/stdc++.h>
using namespace std;
int Partition(vector<int>& arr , int lb , int ub) {
	int i = lb;
	int j = ub;
	int pivot = arr[lb];
	
		while(i < j) {
		while(arr[i] <= pivot && i <= ub-1) i++;
		while(arr[j] > pivot && j >= lb+1) j--;
		
			if(i < j) {
				swap(arr[i] , arr[j]);
			}
		}
		
		swap(arr[lb], arr[j]) ;
		
		return j;
	
} 
void QuickSort(vector<int>& arr , int lb , int ub) {
	if(lb < ub) {
		int loc = Partition(arr , lb , ub);
		QuickSort(arr , lb , loc-1);
		QuickSort(arr , loc+1 , ub);
	}
}
vector<int> quickSort(vector<int> arr)
{
    QuickSort(arr , 0 , arr.size()-1);
	return arr;
}

