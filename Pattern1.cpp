#include<iostream>
using namespace std;
void print1() {
	int i,j;
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			cout << "*" ;
		}
		cout << endl;
	}
}
int main() {
	print1();
}
