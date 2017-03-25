#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
	int t;
	cin >> t;
	string a,b;
	int status = 0;
	while(t--){
		vector<int> arr(26, 0);
		cin >>a >>b;
		for(string::iterator it= a.begin(); it!=a.end();it++){
			arr[*it-97] = 1;
		}
		for(string::iterator it= b.begin(); it!=b.end();it++){
			if (arr[*it-97] == 1)
				arr[*it-97] = -1;
		}
		for(vector<int>::iterator it= arr.begin(); it!=arr.end();it++){
			if (*it == -1){
				cout<<"Yes" << endl;
				status =1;
				break;
			}
		}
		if(status == 0){
			cout<< "No" << endl;
		}
		status = 0;
	}
	return 0;
}