#include<iostream>
using namespace std;
void print5(int n) {
	int i,j;
	for(i=1;i<=n;i++) {
		for(j=1;j<=n-i+1;j++) {
			cout << "* ";
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
	print5(n);
}
}  
