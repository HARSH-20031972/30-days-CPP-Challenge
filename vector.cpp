#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    v.emplace_back(14);//Push the value at top more efficiently
    v.push_back(1);//push the value in container
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(5);
    for(int i=0;i<=v.size()-1;i++) {
        cout << v[i] << endl;
    }
    return 0;
}