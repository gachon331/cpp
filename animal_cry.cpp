#include <iostream>
using namespace std;
class Animal {
 public:
  virtual void Cry() = 0;
};
class Cat : public Animal {
 public:
  void Cry() {
    cout << "港港\n";
    return;
  }
};
class Dog : public Animal {
 public:
  void Cry() {
    cout << "港港\n";
    return;
  }
};
class Bird : public Animal {
 public:
  void Cry() {
    cout << "卤卤\n";
    return;
  };
};
int main() {
  Animal *pa = new Cat;
  Animal *pa = new Dog;
  Animal *pb = new Bird;
  pa->Cry();
  pb->Cry();
  Dog *pd = (Dog *)pa;
  pd->Cry();
  return 0;
}