#include<iostream>
using namespace std;
void print2(int n) {
	int i,j;
	for(i=0;i<n;i++) {
		for(j=0;j<=i;j++) {
			cout << "*" ;
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
	print2(n);
}
}
