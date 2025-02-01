#include<iostream>
using namespace std;
void print3(int n) {
	int i,j;
	for(i=1;i<=n;i++) {
		for(j=1;j<=i;j++) {
			cout << j;
		}
		cout << endl;
	}
}
int main() {
	int t;
	cout << "Enter Testcase=";
	cin >> t;
	for(int i=0;i<t;i++) {
	int n;
	cin >> n;
	print3(n);
}
}
