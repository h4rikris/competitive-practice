#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int n,tmp;
	cin >>n;
	vector<int> v(n);
	int i;
	for(i=0;i<n;i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(vector<int>::iterator it = v.begin(); it != v.end() ; ++it){
		cout<< *it<<endl;
	}
	return 0;
}