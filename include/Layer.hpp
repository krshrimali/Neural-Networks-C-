#ifndef _LAYER_HPP
#define _LAYER_HPP

#include <iostream>
#include "Neuron.hpp"
using namespace std;

class Layer {
public:
  // constructor
  Layer(int size);
  void setVal(int i, double v);

  Matrix* matrixifyVals();
  Matrix* matrixifyActivatedVals();
  Matrix* matrixifyDerivedVals();
private:
  int size;
  vector<Neuron*> neurons;
};

#endif
