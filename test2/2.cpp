#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int n,t,k,i, tmp, count;
	vector<int> a,b;
	cin >> t;
	while(t--) {
		count = 0;
		a.clear();
		b.clear();
		cin >> n;
		for(i=0;i<n;i++) {
			cin >> tmp;
			a.push_back(tmp);
		}

		for(i=0;i<n;i++) {
			cin >> tmp;
			b.push_back(tmp);
		}
		for (i = 0; i < n; ++i)
		{
			if ((a[i] - b[i] != 1) || (a[i] - b[i] != -1)) {
				count++;
			}
		}
		if (count % 2 !=0) {
			cout << "player-2" <<endl;
		} 
		else {
			cout<<"player-1"<<endl;
		}
	}
	return 0;
}