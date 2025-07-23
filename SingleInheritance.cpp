#include<iostream>
#include<string>
using namespace std;

//Base Class
class Animal {
  public: 
    string AnimalType = "Wild Animals";
    void Sound() {
      cout << "Wild Animal Sound!\n";
    }
};
//Derived Class
class Lion: public Animal {
    public:
     string role = "Hunting";
};
int main() {
  Lion Lion1;
  Lion1.Sound();
  cout << Lion1.AnimalType + " " + Lion1.role;
  return 0;
}