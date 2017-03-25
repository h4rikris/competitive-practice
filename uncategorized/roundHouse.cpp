#include<iostream>
#include<vector>

using namespace std;
int main() {
	int n,a,b,temp;
	cin >> n >> a >> b;
	if (b < 0) {
		b = abs(b);
		temp = ((n-(b%n))%n) + a;
	}
	else {
		temp = (b%n)+a;	
	}
	if (temp > n) {
		cout << temp % n <<endl;
	}
	else {
		cout << temp <<endl;
	}
	return 0;
}