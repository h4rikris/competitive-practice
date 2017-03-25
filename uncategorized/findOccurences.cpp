#include<iostream>
#include<vector>

using namespace std;

int findOccurences(vector<int> &v, int start, int end, int value) {
	if (start>end){
		return 0;
	}
	int mid = (start+end)/2;
	if (v[mid] > value) {
		return findOccurences(v, start, mid-1, value);
	}
	if (v[mid] < value)
		return findOccurences(v, mid+1, end, value);

	return findOccurences(v, start, mid-1, value) + 1 + findOccurences(v, mid+1, end, value);
}

int findOccurences2(vector<int> &v, int start, int end, int value, int toggle) {
	if (start > end){
		return -1;
	}

	if (v[start] == value && toggle == 0) {
		return start;
	}

	if (v[end] == value && toggle == 1) {
		return end;
	}

	int mid = toggle == 0 ? (start + end) /2 : (start + end + 1)/2;
	if (v[mid] > value) {
		return findOccurences2(v, start, mid-1, value, toggle);
	}
	else if (v[mid] < value) {
		return findOccurences2(v, mid+1, end, value, toggle);
	}
	else
		return toggle == 0 ? findOccurences2(v, start, mid, value, toggle) : findOccurences2(v, mid, end, value, toggle);
	}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	return;
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	cout << findOccurences(v, 0, v.size()-1, 2) << endl;
	cout << findOccurences2(v, 0, v.size()-1, 2, 0) << endl;
	cout << findOccurences2(v, 0, v.size()-1, 2, 1) << endl;
	return 0;
}