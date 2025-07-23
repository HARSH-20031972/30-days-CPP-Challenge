#include<bits/stdc++.h>
using namespace std;
int main() {
	pair<int, pair<int, int> > p;
	p.first=3;
	p.second.first=5;
	p.second.second=9;
	cout << p.first << " " << p.second.first <<" "<< p.second.second;
}