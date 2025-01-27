#include<iostream>
using namespace std;
int main() {
    int Position=4;
    if(Position==1) {
        cout << "Gold Medal";
    }
    else if(Position==2) {
        cout << "Silver Medal";
    }
    else if(Position==3) {
        cout << "Bronze Medal";
    }
    else {
        cout << "No Medal";
    }
    return 0;
}