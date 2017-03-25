#include<iostream>
#include<vector>
using namespace std;

int main() {
	int i,n,q, t, mn, mx;
	cin >> n >> q;
	vector <int> a(n);
	for (i=0;i<n;i++) {
		cin >> a[i];
	}
	mn = *(min_element(a.begin(), a.end()));
	mx = *(max_element(a.begin(), a.end()));
	while(q--) {
		cin >> t;
		if (mn <= t && mx >= t) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}