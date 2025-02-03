#include<iostream>
using namespace std;
void print7(int n) {
	int i,j;
	for(i=0;i<n;i++) {
		for(j=0;j<n-1-i;j++) {
			cout << " ";
		}//space
		for(j=0;j<2*i+1;j++) {
			cout << "*";
		}//star
		for(j=0;j<n-1-i;j++) {
			cout << " ";
		}//space
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
	print7(n);
}
}
