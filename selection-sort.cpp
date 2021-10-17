/*	
	Selection sort implementation
	inplace sorting algo
	T(n) = 0(n^2)
	Author: Amarjeet Saini
	Date created: 18/10/21
*/

#include <iostream>
#include <vector>

using namespace std;

void selectionSort (vector<int> &arr) {
	int temp, minIndex, n = arr.size();
	for (int i=0; i<n-1; ++i) {
		minIndex = i;
		for (int j=i+1; j<n; ++j) {
			if(arr[j] < arr[minIndex]) minIndex = j;
		}
		// swap
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
		// by end array sorted from a[0..i]
	}
}

int main() {
	int n;
	// size of array
	cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; ++i) cin>>a[i];
	// input array
	cout<<"Input array :\n";
	for (int i=0; i<n; ++i) cout<<a[i]<<" ";
	cout<<"\n";
	selectionSort(a);
	cout<<"Sorted array :\n";
	for (int i=0; i<n; ++i) cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}
