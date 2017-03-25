#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int n,t,k,i, tmp, status;
	int *ma, *mb;
	vector<int> a,b;
	cin >>t;
	while(t--) {
		a.clear();
		b.clear();
		cin >> n >>k;
		for(i=0; i<n ; i++) {
			cin >> tmp;
			a.push_back(tmp);
		}
		for(i=0; i<n ; i++) {
			cin >> tmp;
			b.push_back(tmp);
		}
		if (*min_element(a.begin(), a.end()) >= k || *min_element(b.begin(), b.end()) >=k ) {
			cout << "YES" << endl;
		}
		else {
			status = 0;
			sort(a.begin(), a.end());
			sort(b.rbegin(), b.rend());
			for(i=0; i<n ; i++) {
				if(a[i] + b[i] < k) {
					status = 1;
					break;
				}
			}
			if (status == 0) {
				cout << "YES" <<endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}