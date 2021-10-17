#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> num, int key) {
	/*
		input: dynamic array of int
		return: index of key (0 - based) in array if found else -1 
	*/
	for (int i=0; i<(int)num.size(); ++i) {
		if (num[i] == key) return i;
	}
	return -1; // not found
}

int main() {
	int value, size, i;
	cin>>value;
	vector<int> nums;
	cin>>size;
	while (size--) {
		cin>>i;
		nums.push_back(i);
	}
	cout<<linearSearch(nums,value); 
}
