#include <iostream>
#include <cmath>
#include "../include/Neuron.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
  Neuron* n = new Neuron(0.9);
  // 0.9 is the value for it
  cout << "Val: " << n->getVal() << endl;
  cout << "Activated Val: " << n->getActivatedVal() << endl;
  cout << "Derived Val: " << n->getDerivedVal() << endl;
  return 0;
}
