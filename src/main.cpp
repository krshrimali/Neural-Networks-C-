#include <iostream>
#include <cmath>
#include "../include/Neuron.hpp"
#include "../include/Matrix.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
  Matrix* m = new Matrix(3, 2, true);
  m->printToConsole();

  cout << "----------------" << endl;
  Matrix *mT = m->transpose();
  mT->printToConsole();

  // Neuron* n = new Neuron(1.9);
  // // 0.9 is the value for it
  // cout << "Val: " << n->getVal() << endl;
  // cout << "Activated Val: " << n->getActivatedVal() << endl;
  // cout << "Derived Val: " << n->getDerivedVal() << endl;
  return 0;
}
